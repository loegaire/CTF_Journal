times = [
    0.000, 0.380, 1.530, 1.970, 2.220, 3.330, 3.927, 4.241, 5.320, 5.768,
    6.125, 7.095, 8.236, 8.548, 9.002, 10.232, 10.616, 11.755, 12.034, 12.539,
    13.027, 13.261, 13.675, 14.836, 15.057, 15.418, 16.509, 16.941, 17.382, 18.432,
    18.641, 18.964, 19.955, 20.157, 20.666, 21.616, 22.707, 23.216, 23.786, 24.180,
    25.330, 25.645, 26.795, 27.041, 28.050, 28.270, 28.623, 29.723, 29.995, 31.025,
    31.516, 32.525, 33.666, 34.266
]

# Calculate differences
differences = [times[i + 1] - times[i] for i in range(len(times) - 1)]

# Print value and ASCII character (if printable)
for i, diff in enumerate(differences):
    scaled = round(diff * 100)  # Multiply by 100 and round
    if 32 <= scaled <= 126:  # Printable ASCII range
        print(f"Value: {scaled}, ASCII: {chr(scaled)}")
    else:
        print(f"Value: {scaled}")
