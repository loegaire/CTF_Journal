#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

int C, V, S;
map<tuple<int, int, int, int>, int> memo;

int dp(int c, int v, int s, int last) {
    if (c < 0 || v < 0 || s < 0) return 0;
    if (c == 0 && v == 0 && s == 0) return 1;

    auto key = make_tuple(c, v, s, last);
    if (memo.count(key)) return memo[key];

    int res = 0;
    if (last != 0 && c > 0) res = (res + dp(c - 1, v, s, 0)) % MOD;
    if (last != 1 && v > 0) res = (res + dp(c, v - 1, s, 1)) % MOD;
    if (last != 2 && s > 0) res = (res + dp(c, v, s - 1, 2)) % MOD;

    return memo[key] = res;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> C >> V >> S;
    cout << dp(C, V, S, 3) << '\n'; // 3 means "no last"
}

