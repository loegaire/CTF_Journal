import heapq

# Initial state (indices 0..15)
# 5 2 4 3
# a 8 c 9
# e 1 7 0
# d f 6 b
START = (5, 2, 4, 3, 10, 8, 12, 9, 14, 1, 7, 0, 13, 15, 6, 11)
TARGET = tuple(range(16))

# Moves
MOVES = {
    0: -4, # Up
    1: -1, # Left
    2: 4,  # Down
    3: 1   # Right
}

def get_manhattan_distance(state):
    dist = 0
    for idx, val in enumerate(state):
        if val == 0: continue # Don't count empty tile
        # Current position
        r, c = divmod(idx, 4)
        # Target position (val is target index)
        tr, tc = divmod(val, 4)
        dist += abs(r - tr) + abs(c - tc)
    return dist

def get_moves(idx):
    moves = []
    r, c = divmod(idx, 4)
    if r > 0: moves.append(0) # Up
    if c > 0: moves.append(1) # Left
    if r < 3: moves.append(2) # Down
    if c < 3: moves.append(3) # Right
    return moves

def solve():
    # Priority queue: (f_score, g_score, state, path)
    # f = g + h
    start_h = get_manhattan_distance(START)
    queue = [(start_h, 0, START, "")]
    visited = {START: 0}
    
    while queue:
        f, g, state, path = heapq.heappop(queue)
        
        if state == TARGET:
            return path
        
        # Determine index of 0
        zero_idx = state.index(0)
        
        for move in get_moves(zero_idx):
            offset = MOVES[move]
            new_idx = zero_idx + offset
            
            # Create new state
            new_state = list(state)
            new_state[zero_idx], new_state[new_idx] = new_state[new_idx], new_state[zero_idx]
            new_state = tuple(new_state)
            
            new_g = g + 1
            if new_state in visited and visited[new_state] <= new_g:
                continue
                
            visited[new_state] = new_g
            h = get_manhattan_distance(new_state)
            heapq.heappush(queue, (new_g + h, new_g, new_state, path + str(move)))

if __name__ == "__main__":
    path = solve()
    print(f"Shortest path length: {len(path)}")
    print(f"Path: {path}")
