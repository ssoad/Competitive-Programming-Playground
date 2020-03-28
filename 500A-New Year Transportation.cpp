#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define sssoad int main()
#define stop return 0

int res[30001],n,t,N;
sssoad
{
        cin>>n>>t;
    for(int i=0;i<n-1;i++)
    {
        cin>>res[i];
    }
    N=0;
    while(N<t-1)
        N+=res[N];
   string R= N<t?"YES":"NO";
   cout<<R<<endl;
    stop;
}

