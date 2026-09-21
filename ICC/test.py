import pretty_midi

midi_path = "mystery.mid"

midi_data = pretty_midi.PrettyMIDI(midi_path)

notes = []

for instrument in midi_data.instruments:
    for note in instrument.notes:
        note_name = pretty_midi.note_number_to_name(note.pitch)
        notes.append({
            "start": round(note.start, 3),
            "pitch_num": note.pitch,
            "note": note_name,
            "velocity": note.velocity
        })

notes.sort(key=lambda x: x["start"])

for i, note in enumerate(notes):
    print(f"{i+1:02d}. Time: {note['start']:.3f}s")
