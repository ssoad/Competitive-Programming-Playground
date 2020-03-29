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
    int n,c=0,t,mx,mi;
    cin >> n;
    cin>>mx;
    mi=mx;
    for(int i=1;i<n;i++)
    {
        cin>>t;
        c+=t>mx?1:0;
        c+=mi>t?1:0;

    }
    cout<<c<<endl;

}
