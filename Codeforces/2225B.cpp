#include <bits/stdc++.h>
using namespace std;

char invert(char c) {
    return (c == 'a') ? 'b' : 'a';
}

bool canAchieve(const string& s, const string& target) {
    int n = s.length();
    
    // Find first and last mismatch
    int l = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] != target[i]) {
            l = i;
            break;
        }
    }
    
    // Already matches target
    if (l == -1) return true;
    
    int r = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != target[i]) {
            r = i;
            break;
        }
    }
    
    // Check if all positions outside [l, r] already match target
    for (int i = 0; i < l; i++) {
        if (s[i] != target[i]) return false;
    }
    for (int i = r + 1; i < n; i++) {
        if (s[i] != target[i]) return false;
    }
    
    // Check if we can reverse substring [l, r] without inverting
    bool canReverse = true;
    for (int i = l; i <= r; i++) {
        if (s[r - (i - l)] != target[i]) {
            canReverse = false;
            break;
        }
    }
    if (canReverse) return true;
    
    // Check if we can reverse with inverting
    bool canReverseInvert = true;
    for (int i = l; i <= r; i++) {
        if (invert(s[r - (i - l)]) != target[i]) {
            canReverseInvert = false;
            break;
        }
    }
    
    return canReverseInvert;
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
        
        // Generate the two possible alternating strings
        string target1 = "", target2 = "";
        for (int i = 0; i < n; i++) {
            target1 += (i % 2 == 0) ? 'a' : 'b';
            target2 += (i % 2 == 0) ? 'b' : 'a';
        }
        
        if (canAchieve(s, target1) || canAchieve(s, target2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
