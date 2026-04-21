#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    int dp_prev2 = 0; // Represents dp[i-2]
    int dp_prev1 = 0; // Represents dp[i-1]
    
    for (int i = 1; i <= n; ++i) {
        // Cost of placing 1 vertical domino
        int cost_v = (s1[i - 1] != s2[i - 1]) ? 1 : 0;
        int current = dp_prev1 + cost_v;

        // Cost of placing 2 horizontal dominoes
        if (i >= 2) {
            int cost_h = (s1[i - 2] != s1[i - 1] ? 1 : 0) + 
                         (s2[i - 2] != s2[i - 1] ? 1 : 0);
            current = min(current, dp_prev2 + cost_h);
        }

        // Shift DP states
        dp_prev2 = dp_prev1;
        dp_prev1 = current;
    }

    cout << dp_prev1 << "\n";
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
