#include <iostream>
#include<bits/stdc++.h>
#define soads_game int main()
#define stop return 0;
using namespace std;
soads_game
{
long long n;
cin>>n;
long long t=n;
long long a[n];
while(t--)
{
    cin>>a[t];
}
sort(a,a+n);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
stop
}
