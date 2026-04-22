#include <bits/stdc++.h>
using namespace std;

char invert(char c) {
    return (c == 'a') ? 'b' : 'a';
}

bool canAchieve(const string& s, const string& target) {
    int n = s.length();
    
    // Find first mismatch
    int l = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] != target[i]) {
            l = i;
            break;
        }
    }
    
    if (l == -1) return true;
    
    // Find last mismatch
    int r = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != target[i]) {
            r = i;
            break;
        }
    }
    
    // Check if positions outside [l, r] match target
    for (int i = 0; i < l; i++) {
        if (s[i] != target[i]) return false;
    }
    for (int i = r + 1; i < n; i++) {
        if (s[i] != target[i]) return false;
    }
    
    // Try reversing without inverting
    bool canReverse = true;
    for (int i = l; i <= r; i++) {
        if (s[r - (i - l)] != target[i]) {
            canReverse = false;
            break;
        }
    }
    if (canReverse) return true;
    
    // Try reversing with inverting
    for (int i = l; i <= r; i++) {
        if (invert(s[r - (i - l)]) != target[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        
        // Generate two possible alternating patterns
        string pattern1 = "", pattern2 = "";
        for (int i = 0; i < n; i++) {
            pattern1 += (i % 2 == 0) ? 'a' : 'b';
            pattern2 += (i % 2 == 0) ? 'b' : 'a';
        }
        
        if (canAchieve(s, pattern1) || canAchieve(s, pattern2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}

