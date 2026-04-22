#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, r;
    cin >> n >> r;
    
    vector<pair<long long, long long>> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }
    
    vector<bool> covered(n, false);
    vector<pair<long long, long long>> circles;
    
    auto count_coverage = [&](long long cx, long long cy) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (!covered[i]) {
                long long dx = points[i].first - cx;
                long long dy = points[i].second - cy;
                if (dx * dx + dy * dy <= (long long)r * r) {
                    cnt++;
                }
            }
        }
        return cnt;
    };
    
    while (true) {
        // Check if we have enough coverage  
        int covered_count = 0;
        for (int i = 0; i < n; i++) {
            if (covered[i]) covered_count++;
        }
        
        if (covered_count * 100 >= 89 * n) break;
        
        // Find first uncovered point
        int uncovered_idx = -1;
        for (int i = 0; i < n; i++) {
            if (!covered[i]) {
                uncovered_idx = i;
                break;
            }
        }
        
        if (uncovered_idx == -1) break;
        
        long long px = points[uncovered_idx].first;
        long long py = points[uncovered_idx].second;
        
        long long best_cx = px;
        long long best_cy = py;
        int best_coverage = count_coverage(px, py);
        
        // Grid-based search: fixed step size for efficiency
        int step_size = max(1, r / 25);
        
        for (long long dx = -r; dx <= r; dx += step_size) {
            for (long long dy = -r; dy <= r; dy += step_size) {
                long long cx = px + dx;
                long long cy = py + dy;
                
                // Verify this position can cover the uncovered point
                if (dx * dx + dy * dy > (long long)r * r) continue;
                
                int cov = count_coverage(cx, cy);
                if (cov > best_coverage) {
                    best_coverage = cov;
                    best_cx = cx;
                    best_cy = cy;
                }
            }
        }
        
        // Place circle at best position
        circles.push_back({best_cx, best_cy});
        
        // Mark newly covered points
        for (int i = 0; i < n; i++) {
            if (!covered[i]) {
                long long dx = points[i].first - best_cx;
                long long dy = points[i].second - best_cy;
                if (dx * dx + dy * dy <= (long long)r * r) {
                    covered[i] = true;
                }
            }
        }
    }
    
    cout << circles.size() << "\n";
    for (auto& c : circles) {
        cout << c.first << " " << c.second << "\n";
    }
    
    return 0;
}
