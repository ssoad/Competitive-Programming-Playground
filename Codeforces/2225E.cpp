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
    
    int covered_count = 0;
    
    while (true) {
        // Find first uncovered point
        int uncovered_idx = -1;
        for (int i = 0; i < n; i++) {
            if (!covered[i]) {
                uncovered_idx = i;
                break;
            }
        }
        
        if (uncovered_idx == -1) break;
        
        // Check if we have enough coverage
        if (covered_count * 100 >= 89 * n) break;
        
        long long px = points[uncovered_idx].first;
        long long py = points[uncovered_idx].second;
        
        long long best_cx = px;
        long long best_cy = py;
        int best_count = 0;
        
        // Sample candidate centers with finer granularity
        int step = max(1, r / 30);
        for (long long cx = px - r; cx <= px + r; cx += step) {
            for (long long cy = py - r; cy <= py + r; cy += step) {
                // Check if this center covers the uncovered point
                if ((px - cx) * (px - cx) + (py - cy) * (py - cy) > (long long)r * r) {
                    continue;
                }
                
                // Count how many uncovered points this covers
                int count = 0;
                for (int i = 0; i < n; i++) {
                    if (!covered[i]) {
                        long long d_sq = (points[i].first - cx) * (points[i].first - cx) +
                                        (points[i].second - cy) * (points[i].second - cy);
                        if (d_sq <= (long long)r * r) {
                            count++;
                        }
                    }
                }
                
                if (count > best_count) {
                    best_count = count;
                    best_cx = cx;
                    best_cy = cy;
                }
            }
        }
        
        // If no good position found in grid, try the uncovered point itself
        if (best_count == 0) {
            best_cx = px;
            best_cy = py;
        }
        
        // Place circle at best position
        circles.push_back({best_cx, best_cy});
        
        // Mark covered points
        for (int i = 0; i < n; i++) {
            if (!covered[i]) {
                long long d_sq = (points[i].first - best_cx) * (points[i].first - best_cx) +
                                (points[i].second - best_cy) * (points[i].second - best_cy);
                if (d_sq <= (long long)r * r) {
                    covered[i] = true;
                    covered_count++;
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
