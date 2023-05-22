/*
Problem: problem name
Author: Md. Sohanuzzaman Soad
*/

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int ans = k + (k - 1) / (n - 1);
        cout << ans << endl;
    }
    return 0;
}