/*
Codeforces - 1472B - Fair Division
https://codeforces.com/contest/1472/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (ll) x.size()

int main()
{
    ll t, n, a;
    cin >> t;
    while (t--)
    {
        int div = 0, sum = 0, one = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a == 1)
            {
                one++;
                sum++;
            }
            else
                sum += 2;
        }
        if (sum % 2 == 0)
        {
            div = sum / 2;
            if (div % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                if (one)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}