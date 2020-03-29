
#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0;

/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

start
{
    int n,t;
    cin>>n;
    t=n;
    int arr[n];
    while(t--)
    {
        cin>>arr[t];
    }
    sort(arr,arr+n);
    int r=0;
    for(int i=0;i<n;i++)
    {
        r+=arr[n-1]-arr[i];
    }
   cout<<r<<endl;
    stop
}
