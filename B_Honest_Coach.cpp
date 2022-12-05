/*
Codeforces Round #677 (Div. 2) - B. Honest Coach
https://codeforces.com/contest/1433/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

int main() {
    fastio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int min = INT_MAX;
        for(int i = 0; i < n - 1; i++) {
            if(a[i + 1] - a[i] < min) {
                min = a[i + 1] - a[i];
            }
        }
        cout << min << endl;
    }
    return 0;
}