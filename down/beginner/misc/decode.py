# src/decode.py
import numpy as np
import soundfile as sf
from scipy.signal import find_peaks, butter, filtfilt
import argparse
import os
from utils import butter_bandpass, plot_fft
import scipy.signal

# Global Parameters and Matrices
FREQS_LOW =  [20500, 21000, 21500, 22000, 22500, 23000, 23500]
FREQS_HIGH = [24000, 24500, 25000, 25500, 26000]

EXTENDED_MATRIX = [
    ['A', 'B', 'C', 'D', 'E'],
    ['F', 'G', 'H', 'I', 'J'],
    ['K', 'L', 'M', 'N', 'O'],
    ['P', 'Q', 'R', 'S', 'T'],
    ['U', 'V', 'W', 'X', 'Y'],
    ['Z', '0', '1', '2', '3'],
    ['4', '5', '6', '7', '8']
]

def find_frequencies(char):
    for i, row in enumerate(EXTENDED_MATRIX):
        if char in row:
            return FREQS_LOW[i], FREQS_HIGH[row.index(char)]
    return None

def decode_ultrasonic_signal(audio_data, sr=96000, chunk_duration=0.2,
                             lowcut=20000, highcut=27000):
    """
    Decodes an audio signal containing a hidden ultrasonic message.
    """
    b, a = butter_bandpass(lowcut, highcut, sr, order=3)
    chunk_size = int(sr * chunk_duration)
    min_gap = 0.25
    last_time_s = -9999
    
    if len(audio_data.shape) > 1:
        audio_data = audio_data[:, 0]
    
    audio_data = filtfilt(b, a, audio_data)
    char_positions = []
    
    for start in range(0, len(audio_data), chunk_size):
        chunk = audio_data[start:start+chunk_size]
        if len(chunk) < chunk_size:
            break
            
        if np.max(np.abs(chunk)) < 0.005:
            continue

        window = np.hanning(len(chunk))
        windowed = chunk * window
        fft_result = np.abs(np.fft.fft(windowed))
        freqs = np.fft.fftfreq(len(windowed), 1/sr)

        pos_mask = freqs > 0
        freqs = freqs[pos_mask]
        fft_result = fft_result[pos_mask]

        peak_threshold = np.max(fft_result) * 0.15
        peaks, props = find_peaks(
            fft_result, 
            height=peak_threshold,
            distance=50,
            prominence=0.1
        )
        
        detected_freqs = freqs[peaks]
        peak_heights = props['peak_heights']

        if not (2 <= len(peaks) <= 4):
            continue

        low_candidates = []
        high_candidates = []
        tol = 70

        for f_val, amp_val in zip(detected_freqs, peak_heights):
            for i, f_l in enumerate(FREQS_LOW):
                if abs(f_val - f_l) < tol:
                    low_candidates.append((i, amp_val))
            for j, f_h in enumerate(FREQS_HIGH):
                if abs(f_val - f_h) < tol:
                    high_candidates.append((j, amp_val))

        if len(low_candidates) == 1 and len(high_candidates) == 1:
            low_idx, low_amp = low_candidates[0]
            high_idx, high_amp = high_candidates[0]
            ratio_amp = min(low_amp, high_amp) / max(low_amp, high_amp)
            
            if 0.5 <= ratio_amp <= 1.5:
                current_time_s = start / sr
                if (current_time_s - last_time_s) >= min_gap:
                    char_decoded = EXTENDED_MATRIX[low_idx][high_idx]
                    confidence = ratio_amp * (min(low_amp, high_amp) / peak_threshold)
                    char_positions.append((current_time_s, char_decoded, confidence))
                    last_time_s = current_time_s

    if char_positions:
        mean_confidence = np.mean([c[2] for c in char_positions])
        char_positions = [c for c in char_positions if c[2] >= mean_confidence * 0.6]
    
    char_positions.sort(key=lambda x: x[0])
    return "".join(c[1] for c in char_positions)

def decode_file(input_wav, output_graph="graphs/decoding_fft.png",
                lowcut=20000, highcut=27000, chunk_duration=0.2, sample_rate=96000):
    """
    Offline decoding of a WAV file containing an ultrasonic message.
    """
    print(f"[OFFLINE DECODE] Reading '{input_wav}' ...")
    audio_data, sr = sf.read(input_wav)
    
    if sr != sample_rate:
        print(f"[WARNING] Resampling from {sr} Hz to {sample_rate} Hz")
        samples = len(audio_data)
        new_samples = int(samples * (sample_rate / sr))
        audio_data = scipy.signal.resample(audio_data, new_samples)
        sr = sample_rate
    
    if audio_data.ndim > 1:
        audio_data = audio_data[:, 0]

    message = decode_ultrasonic_signal(
        audio_data,
        sr=sr,
        chunk_duration=chunk_duration,
        lowcut=lowcut,
        highcut=highcut
    )

    print(f"\nDecoded message: {message}")
    return message

def main():
    parser = argparse.ArgumentParser(description='Decodes a hidden message from a WAV file')
    parser.add_argument('input_file', help='Audio file to decode')
    parser.add_argument('--sample_rate', '-s', type=int, default=96000, help='Sample rate (Hz)')
    args = parser.parse_args()

    try:
        message = decode_file(args.input_file, sample_rate=args.sample_rate)
    except Exception as e:
        print(f"[ERROR] {str(e)}")
        return 1
    
    return 0

if __name__ == "__main__":
    exit(main())
