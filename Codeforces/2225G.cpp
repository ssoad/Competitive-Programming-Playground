#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> k(m);
        for (int i = 0; i < m; i++) {
            cin >> k[i];
        }
        
        // Build adjacency list
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int diff = j - i;
                bool valid = false;
                for (int x : k) {
                    if (diff % x == 0) {
                        valid = true;
                        break;
                    }
                }
                if (valid) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        // Find Hamiltonian path using backtracking with DFS
        vector<int> path;
        vector<bool> used(n, false);
        bool found = false;
        
        function<void(int)> dfs = [&](int cur) {
            if (found) return;
            
            path.push_back(cur);
            used[cur] = true;
            
            if ((int)path.size() == n) {
                found = true;
                return;
            }
            
            // Try neighbors
            for (int next : adj[cur]) {
                if (!used[next]) {
                    dfs(next);
                    if (found) return;
                }
            }
            
            // Backtrack
            path.pop_back();
            used[cur] = false;
        };
        
        // Try starting from each node
        for (int start = 0; start < n && !found; start++) {
            path.clear();
            fill(used.begin(), used.end(), false);
            dfs(start);
        }
        
        // Output result
        if (found) {
            for (int i = 0; i < n; i++) {
                cout << path[i];
                if (i < n - 1) cout << " ";
            }
            cout << "\n";
        } else {
            cout << "-1\n";
        }
    }
    
    return 0;
}
