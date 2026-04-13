#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long max_consecutive = 0;
        long long current_consecutive = 1;
        long long prev_bad = (m - (a[0] % m)) % m;
        
        for (int i = 1; i < n; i++) {
            long long curr_bad = (m - (a[i] % m)) % m;
            if (curr_bad == prev_bad) {
                current_consecutive++;
            } else {
                max_consecutive = max(max_consecutive, current_consecutive);
                current_consecutive = 1;
            }
            prev_bad = curr_bad;
        }
        max_consecutive = max(max_consecutive, current_consecutive);
        
        // If any m consecutive positions share the same bad time, answer is NO
        if (max_consecutive >= m) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    
    return 0;
}
