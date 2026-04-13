#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        long long p, q;
        cin >> n >> k >> p >> q;
        
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Use set with string representation for faster comparison
        set<vector<long long>> visited;
        queue<vector<long long>> bfs_queue;
        bfs_queue.push(a);
        visited.insert(a);
        
        long long min_sum = 0;
        for(auto x : a) min_sum += x;
        
        int iterations = 0;
        const int MAX_ITERATIONS = 100000;
        
        while(!bfs_queue.empty() && iterations < MAX_ITERATIONS) {
            iterations++;
            auto curr = bfs_queue.front();
            bfs_queue.pop();
            
            long long sum = 0;
            for(auto x : curr) sum += x;
            min_sum = min(min_sum, sum);
            
            if (sum == 0) {
                min_sum = 0;
                break;
            }
            
            // Try all possible intervals and operations
            for (int l = 0; l < n && iterations < MAX_ITERATIONS; l++) {
                for (int r = l + k - 1; r < n && iterations < MAX_ITERATIONS; r++) {
                    // Try p first, then q
                    for (long long m : {p, q}) {
                        iterations++;
                        auto next = curr;
                        bool improved = false;
                        for (int i = l; i <= r; i++) {
                            long long old_val = next[i];
                            next[i] %= m;
                            if (next[i] < old_val) improved = true;
                        }
                        
                        if (improved && visited.find(next) == visited.end()) {
                            visited.insert(next);
                            bfs_queue.push(next);
                        }
                    }
                }
            }
        }
        
        cout << min_sum << "\n";
    }
    
    return 0;
}
