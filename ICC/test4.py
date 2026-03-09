import pretty_midi

# Path to the MIDI file
midi_path = "mystery.mid"

try:
    # Load the MIDI file
    midi_data = pretty_midi.PrettyMIDI(midi_path)

    # Collect all pitches
    all_pitches = []
    for instrument in midi_data.instruments:
        for note in instrument.notes:
            all_pitches.append(note.pitch)

    # Get unique pitches
    unique_pitches = sorted(set(all_pitches))

    # Print all pitches in order of appearance
    print("All pitches (MIDI note numbers):")
    for i, pitch in enumerate(all_pitches, 1):
        note_name = pretty_midi.note_number_to_name(pitch)
        print(f"{i:02d}. Pitch: {pitch} ({note_name})")

    # Print unique pitches
    print("\nUnique pitches (MIDI note numbers):")
    for i, pitch in enumerate(unique_pitches, 1):
        note_name = pretty_midi.note_number_to_name(pitch)
        print(f"{i:02d}. Pitch: {pitch} ({note_name})")

except FileNotFoundError:
    print(f"Error: The file '{midi_path}' was not found. Ensure it exists in the same directory as this script.")
except Exception as e:
    print(f"Error processing MIDI file: {e}")
