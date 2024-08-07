#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define soads_game int main()

soads_game
{
    int n,k,c=0,num;
    cin>>n>>k;
    while(n--)
    {
        cin>>num;
        if(!(num%k))
        {
            c++;
        }

    }
    cout<<c<<endl;
    return 0;
}
