/*
Problem: 1475B. New Year's Number
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
        long long int n;
        cin >> n;
        long long int ans = n / 2020;
        long long int rem = n % 2020;
        if(ans >= rem)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}