import matplotlib.pyplot as plt
import numpy as np
import scipy.io.wavfile

rate, data = scipy.io.wavfile.read("chall.wav")

# If stereo, take one channel
if len(data.shape) > 1:
    data = data[:, 0]

plt.specgram(data, NFFT=1024, Fs=rate, noverlap=512, cmap='gray')
plt.axis('off')
plt.savefig('spectrogram.png', bbox_inches='tight', pad_inches=0)
plt.show()
