

/*
Problem: A. Plus or Minus
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
        int a,b,c;
        char result;
        cin>>a>>b>>c;
        result = (a+b)==c ?'+':'-';
        cout<<result<<endl;
    }
    return 0;
}