#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define soads_game int main()


soads_game
{
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    if(a==b)
    cout<<"YES";
    else
        cout<<"NO";

    return 0;
}

