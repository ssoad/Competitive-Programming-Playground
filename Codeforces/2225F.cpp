#include <bits/stdc++.h>
using namespace std;

const int MOD1 = 1e9 + 7;
const int MOD2 = 1e9 + 9;
const int BASE = 313;
const int MAXN = 1000005;

long long P1[MAXN], P2[MAXN];
long long H1[MAXN], H2[MAXN];
bool initialized = false;
string s;

void global_init() {
    if (initialized) return;
    P1[0] = 1;
    P2[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        P1[i] = (P1[i - 1] * BASE) % MOD1;
        P2[i] = (P2[i - 1] * BASE) % MOD2;
    }
    initialized = true;
}

pair<long long, long long> get_hash(int l, int r) {
    long long h1 = H1[r + 1] - (H1[l] * P1[r - l + 1]) % MOD1;
    if (h1 < 0) h1 += MOD1;
    long long h2 = H2[r + 1] - (H2[l] * P2[r - l + 1]) % MOD2;
    if (h2 < 0) h2 += MOD2;
    return {h1, h2};
}

int compare_str(int i1, int j1, int i2, int j2) {
    int len1 = j1 - i1 + 1;
    int len2 = j2 - i2 + 1;
    int low = 1, high = min(len1, len2), lcp = 0;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (get_hash(i1, i1 + mid - 1) == get_hash(i2, i2 + mid - 1)) {
            lcp = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (lcp == len1 && lcp == len2) return 0;
    if (lcp == len1) return -1;
    if (lcp == len2) return 1;
    return s[i1 + lcp] < s[i2 + lcp] ? -1 : 1;
}

void solve() {
    long long n, l, k;
    cin >> n >> l >> k;
    cin >> s;
    
    if (n < k * l) {
        cout << "NO\n";
        return;
    }
    
    H1[0] = 0;
    H2[0] = 0;
    for (int i = 0; i < n; i++) {
        H1[i + 1] = (H1[i] * BASE + s[i]) % MOD1;
        H2[i + 1] = (H2[i] * BASE + s[i]) % MOD2;
    }
    
    int best_i = -1, best_j = -1;
    
    for (int i = 0; i < n; i++) {
        if (i > 0 && i < l) continue;
        
        int j_max = -1;
        long long R = (k - 1) - (i / l);
        
        if (n - 1 >= i + l - 1) {
            int cond_c = (i > 0 ? 1 : 0);
            if (cond_c <= k - 1 && R <= 0) {
                j_max = n - 1;
            }
        }
        
        if (j_max == -1) {
            long long req_y = max(1LL, R) * l;
            long long cand_j = n - 1 - req_y;
            if (cand_j >= i + l - 1) {
                int cond_c = (i > 0 ? 1 : 0) + 1;
                if (cond_c <= k - 1) {
                    j_max = cand_j;
                }
            }
        }
        
        if (j_max != -1) {
            if (best_i == -1) {
                best_i = i;
                best_j = j_max;
            } else {
                if (compare_str(i, j_max, best_i, best_j) > 0) {
                    best_i = i;
                    best_j = j_max;
                }
            }
        }
    }
    
    if (best_i != -1) {
        cout << "YES\n";
        for (int x = best_i; x <= best_j; x++) {
            cout << s[x];
        }
        cout << "\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    global_init();
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
