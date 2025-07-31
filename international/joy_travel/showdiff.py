import math
import numpy as np
from PIL import Image

# Step 1: Paste your RGB text data here
rgb_text = """
r:102 g:102 b:102
r:179 g:179 b:180
r:92 g:92 b:82
r:14 g:14 b:27
r:106 g:106 b:118
r:71 g:71 b:100
r:188 g:188 b:150
r:20 g:20 b:37
r:102 g:102 b:94
r:121 g:121 b:70
r:210 g:210 b:148
r:214 g:214 b:155
r:74 g:74 b:30
r:202 g:202 b:145
r:87 g:87 b:53
r:116 g:116 b:29
r:99 g:110 b:110
r:103 g:106 b:109
r:151 g:154 b:148
r:130 g:143 b:154
r:149 g:152 b:132
r:52 g:57 b:26
r:1 g:12 b:38
r:87 g:90 b:107
r:235 g:230 b:222
r:157 g:144 b:175
r:37 g:40 b:110
r:129 g:140 b:193
r:191 g:178 b:230
r:187 g:182 b:237
r:20 g:25 b:123
r:160 g:173 b:196
r:203 g:209 b:209
r:57 g:35 b:36
r:21 g:15 b:1
r:252 g:230 b:243
r:235 g:241 b:237
r:88 g:66 b:97
r:48 g:42 b:0
r:218 g:192 b:241
r:58 g:32 b:24
r:254 g:228 b:219
r:169 g:179 b:245
r:255 g:229 b:168
r:219 g:193 b:149
r:187 g:161 b:250
r:207 g:213 b:183
r:14 g:20 b:125
r:189 g:154 b:154
r:189 g:154 b:157
r:174 g:137 b:135
r:189 g:154 b:143
r:50 g:21 b:9
r:107 g:76 b:111
r:54 g:17 b:59
r:243 g:212 b:229
r:63 g:24 b:32
r:248 g:223 b:224
r:130 g:165 b:227
r:228 g:195 b:142
r:50 g:21 b:65
r:134 g:161 b:250
r:20 g:51 b:81
r:72 g:111 b:6
r:166 g:146 b:146
r:17 g:37 b:34
r:131 g:183 b:185
r:88 g:108 b:121
r:59 g:15 b:19
r:13 g:57 b:26
r:241 g:197 b:239
r:249 g:205 b:252
r:8 g:60 b:4
r:89 g:109 b:82
r:52 g:0 b:70
r:129 g:181 b:248
r:83 g:103 b:51
r:91 g:111 b:52
r:110 g:90 b:56
r:187 g:143 b:230
r:198 g:135 b:135
r:171 g:234 b:237
r:252 g:189 b:179
r:7 g:70 b:83
r:174 g:239 b:243
r:34 g:99 b:64
r:205 g:140 b:166
r:80 g:17 b:32
r:163 g:226 b:218
r:49 g:112 b:79
r:103 g:38 b:96
r:131 g:194 b:143
r:1 g:64 b:20
r:253 g:188 b:231
r:133 g:196 b:166
r:53 g:116 b:29
r:105 g:39 b:39
r:3 g:77 b:74
r:53 g:123 b:117
r:220 g:146 b:135
r:190 g:240 b:236
r:145 g:223 b:252
r:217 g:151 b:189
r:43 g:101 b:84
r:161 g:239 b:215
r:201 g:135 b:184
r:189 g:243 b:181
r:227 g:173 b:224
r:13 g:67 b:23
r:94 g:16 b:75
r:47 g:97 b:3
r:14 g:64 b:41
r:199 g:156 b:156
r:205 g:150 b:145
r:214 g:141 b:131
r:251 g:160 b:181
r:248 g:163 b:191
r:189 g:230 b:197
r:39 g:124 b:86
r:212 g:143 b:190
r:207 g:148 b:172
r:236 g:183 b:136
r:81 g:10 b:76
r:110 g:53 b:120
r:52 g:111 b:59
r:23 g:76 b:23
r:153 g:194 b:160
r:216 g:131 b:234
r:251 g:147 b:147
r:187 g:211 b:212
r:123 g:19 b:29
r:236 g:132 b:145
r:40 g:64 b:92
r:156 g:244 b:215
r:14 g:102 b:76
r:44 g:68 b:117
r:64 g:40 b:16
r:88 g:48 b:15
r:70 g:46 b:104
r:8 g:96 b:45
r:87 g:63 b:107
r:128 g:232 b:179
r:235 g:131 b:225
r:135 g:239 b:134
r:215 g:162 b:162
r:62 g:75 b:76
r:138 g:255 b:241
r:242 g:135 b:146
r:80 g:37 b:57
r:135 g:242 b:209
r:162 g:215 b:253
r:162 g:215 b:230
r:32 g:85 b:109
r:122 g:15 b:48
r:4 g:113 b:55
r:233 g:156 b:209
r:230 g:147 b:199
r:249 g:140 b:215
r:40 g:93 b:63
r:27 g:110 b:7
"""  # Replace "..." with the full dataset

# Step 2: Parse the RGB text into a list of RGB tuples
def parse_rgb_text(text):
    lines = [line.strip() for line in text.strip().splitlines() if line.strip()]
    rgb_values = []
    for line in lines:
        parts = line.split()
        r = int(parts[0].split(":")[1])
        g = int(parts[1].split(":")[1])
        b = int(parts[2].split(":")[1])
        rgb_values.append((r, g, b))
    return np.array(rgb_values, dtype=np.uint8)

# Step 3: Load .palette blob as RGB data
def load_palette_blob(path):
    with open(path, 'rb') as f:
        blob = f.read()
    if len(blob) % 3 != 0:
        raise ValueError("Palette blob size is not a multiple of 3 (RGB triplets)")
    return np.frombuffer(blob, dtype=np.uint8).reshape(-1, 3)

# Step 4: Compute the absolute difference
def compute_diff(arr1, arr2):
    min_len = min(len(arr1), len(arr2))
    diff = np.abs(arr1[:min_len] - arr2[:min_len])
    return diff

# Step 5: Render square image
def show_as_square(pixels, title="diff.png"):
    length = len(pixels)
    side = math.ceil(math.sqrt(length))
    padded = np.zeros((side * side, 3), dtype=np.uint8)
    padded[:length] = pixels
    img = padded.reshape((side, side, 3))
    Image.fromarray(img).save(title)
    print(f"Saved image to {title}")

# --- MAIN ---
if __name__ == "__main__":
    rgb_array = parse_rgb_text(rgb_text)
    palette_array = load_palette_blob(".palette_blob")  # <-- change this if needed
    diff = compute_diff(rgb_array, palette_array)
    show_as_square(diff)

