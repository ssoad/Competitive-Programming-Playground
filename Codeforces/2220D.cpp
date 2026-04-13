#include <iostream>
#include <vector>
using namespace std;

int sendQuery(const vector<int>& positions) {
    if (positions.size() == 0) return 0;
    
    cout << "?";
    cout << " " << positions.size();
    for (const auto& pos : positions) {
        cout << " " << pos;
    }
    cout << "\n";
    cout.flush();
    
    int response;
    cin >> response;
    if (response == -1) exit(0);
    return response;
}

int querySingleRange(int start, int end) {
    if (start > end) return 0;
    
    vector<int> range(end - start + 1);
    for (int i = 0; i < range.size(); i++) {
        range[i] = start + i;
    }
    return sendQuery(range);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int n;
        cin >> n;
        int totalSize = 2 * n + 1;
        
        // Find position i3: first position where parity differs
        int lo = 1, hi = totalSize;
        int posI3 = totalSize;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int parity = querySingleRange(1, mid) % 2;
            int expectedParity = mid % 2;
            
            if (parity != expectedParity) {
                posI3 = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        
        // Find position i1: last position from the right where parity differs
        lo = 1;
        hi = totalSize;
        int posI1 = 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int parity = querySingleRange(mid, totalSize) % 2;
            int expectedParity = (totalSize - mid + 1) % 2;
            
            if (parity != expectedParity) {
                posI1 = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        
        // Find position i2: search in range [1, i3-1]
        lo = 1;
        hi = posI3 - 1;
        int posI2 = hi;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            
            vector<int> querySet;
            for (int idx = 1; idx <= mid; idx++) {
                querySet.push_back(idx);
            }
            querySet.push_back(posI3);
            
            int parity = sendQuery(querySet) % 2;
            int expectedParity = (mid + 1) % 2;
            
            if (parity != expectedParity) {
                posI2 = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        
        cout << "! " << posI1 << " " << posI2 << " " << posI3 << "\n";
        cout.flush();
    }
    
    return 0;
}
