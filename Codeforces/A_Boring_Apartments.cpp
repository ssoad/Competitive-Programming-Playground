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
        string a;
        cin >> a;
        int digit = a[0] - '0' - 1;
        int len = a.length();
        cout << digit * 10 + (len * (len + 1)) / 2 << endl;
    }

    return 0;
}