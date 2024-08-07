/*
Problem: 1371A. Magical Sticks
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
        int n;
        cin >> n;
        if(n % 2 == 0)
        {
            cout << n / 2 << endl;
        }
        else
        {
            cout << (n / 2) + 1 << endl;
        }
    }
    return 0;
}