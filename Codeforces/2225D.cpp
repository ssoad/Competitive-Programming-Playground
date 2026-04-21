#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long ceil_div(long long a, long long b) {
    return (a + b - 1) / b;
}

void solve() {
    long long n, x;
    cin >> n >> x;
    
    long long count_left_0 = (x + 4) / 4;
    long long count_left_1 = (x >= 2) ? (x + 2) / 4 : 0;
    
    long long count_right_0 = max(0LL, (n + 1) / 4 - ceil_div(x + 1, 4) + 1);
    long long count_right_1 = max(0LL, (n - 1) / 4 - ceil_div(x - 1, 4) + 1);
    
    long long ans = ((count_left_0 % MOD) * (count_right_0 % MOD)) % MOD;
    ans = (ans + ((count_left_1 % MOD) * (count_right_1 % MOD)) % MOD) % MOD;
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
