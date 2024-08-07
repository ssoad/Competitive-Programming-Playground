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

    while (t--)
    {
        int mx = INT_MAX;
        int mn = -INT_MAX;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mx = min(mx, x);
            mn = max(mn, x);
        }
        cout << mn - mx << endl;
    }
    return 0;
}