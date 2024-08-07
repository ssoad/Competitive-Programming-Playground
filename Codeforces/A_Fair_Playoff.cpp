/*
Problem: A. Fair Playoff
Author: Md. Sohanuzzaman Soad
*/

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void solve(int*x);

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        int a[4];
        for(int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }
        solve(a);
    }
    return 0;
}

void solve(int* x){
    int max1 = max(x[0], x[1]);
    int max2 = max(x[2], x[3]);
    sort(x, x + 4);
    if((max1 == x[2] || max1 == x[3]) && (max2 == x[2] || max2 == x[3]))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}