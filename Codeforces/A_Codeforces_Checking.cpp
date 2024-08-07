/*
Problem: 1791A. Codeforces Checking
Author: Md. Sohanuzzaman Soad
*/

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

const string cf = "codeforces";

void solve(string a);

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       string a;
       cin>>a;
       solve(a);
       

    }
    return 0;
}

void solve(string a)
{   
    
    string result = cf.find(a) != string::npos ? "YES" : "NO";
    cout << result << endl;
}