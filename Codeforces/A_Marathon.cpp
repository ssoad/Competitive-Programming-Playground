/*
Codeforces - 1692A - Marathon
https://codeforces.com/contest/1692/problem/A
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

    while (t--)
    {
        int a[4], count = 0;
        for (int i = 0; i < 4; i++)
        {

            cin >> a[i];
            if (a[i] > a[0])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}