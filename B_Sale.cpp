/*
Problem: 34B. Sale
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
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0;
    for (int i = 0; i < m; ++i)
    {
        if (a[i] < 0)
        {
            sum += a[i];
        }
        if (a[i] >= 0)
        {
            break;
        }
    }
    cout << abs(sum) << endl;
    return 0;
}