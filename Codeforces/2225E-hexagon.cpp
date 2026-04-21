#pragma GCC optimize("O3")
#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <set>

using namespace std;

struct Center {
    long long cx, cy, d2;
};

inline Center get_nearest_center(long long px, long long py, long long dx, long long dy, long long r, long long H) {
    double nx = px - dx;
    double ny = py - dy;

    long long r1 = std::round(ny / (2.0 * H)) * 2;
    long long c1 = std::round(nx / (2.0 * r));
    long long cx1 = c1 * 2 * r;
    long long cy1 = r1 * H;

    long long r2 = std::round((ny - H) / (2.0 * H)) * 2 + 1;
    long long c2 = std::round((nx - r) / (2.0 * r));
    long long cx2 = c2 * 2 * r + r;
    long long cy2 = r2 * H;

    long long d1 = (nx - cx1) * (nx - cx1) + (ny - cy1) * (ny - cy1);
    long long d2 = (nx - cx2) * (nx - cx2) + (ny - cy2) * (ny - cy2);

    if (d1 < d2) {
        return {cx1 + dx, cy1 + dy, d1};
    } else {
        return {cx2 + dx, cy2 + dy, d2};
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, r;
    if (!(cin >> n >> r)) return 0;

    vector<pair<long long, long long>> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }

    long long H = ceil(r * sqrt(3.0));

    mt19937_64 rng(1337);
    uniform_int_distribution<long long> dist_x(0, 2 * r - 1);
    uniform_int_distribution<long long> dist_y(0, 2 * H - 1);

    long long best_dx = 0, best_dy = 0;
    int max_covered = -1;

    int max_iterations = min(100000, (int)(100 * sqrt(n)));
    
    for (int iter = 0; iter < max_iterations; iter++) {
        long long dx = dist_x(rng);
        long long dy = dist_y(rng);

        int covered = 0;
        for (int i = 0; i < n; i++) {
            Center c = get_nearest_center(points[i].first, points[i].second, dx, dy, r, H);
            if (c.d2 <= r * r) {
                covered++;
            }
        }

        if (covered > max_covered) {
            max_covered = covered;
            best_dx = dx;
            best_dy = dy;
            
            if (max_covered * 100 >= 89 * n) {
                break;
            }
        }
    }

    set<pair<long long, long long>> active_circles;
    for (int i = 0; i < n; i++) {
        Center c = get_nearest_center(points[i].first, points[i].second, best_dx, best_dy, r, H);
        if (c.d2 <= r * r) {
            active_circles.insert({c.cx, c.cy});
        }
    }

    cout << active_circles.size() << "\n";
    for (auto p : active_circles) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
