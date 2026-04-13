#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

typedef long long ll;

void solve() {
    ll horizontalDiff, verticalDiff;
    cin >> horizontalDiff >> verticalDiff;
    
    ll combinedValue = horizontalDiff + 2 * verticalDiff;
    
    // Try each possible number of horizontal segments
    for (ll numSegments = 1; numSegments <= 20000; numSegments++) {
        ll numerator = combinedValue - numSegments;
        ll denominator = 2 * numSegments + 1;
        
        // Check if we have a valid solution
        if (numerator > 0 && numerator % denominator == 0) {
            ll segmentLength = numerator / denominator;
            
            // Calculate actual horizontal and vertical dimensions
            ll horizontalDimension = (numSegments + 1) * segmentLength;
            ll verticalDimension = (segmentLength + 1) * numSegments;
            
            // Verify the solution satisfies the constraint
            ll dimensionDifference = abs(horizontalDimension - verticalDimension);
            if (dimensionDifference <= horizontalDiff) {
                cout << numSegments << " " << segmentLength << "\n";
                return;
            }
        }
    }
    
    // No valid solution found
    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCaseCount;
    cin >> testCaseCount;
    
    while (testCaseCount--) {
        solve();
    }
    
    return 0;
}
