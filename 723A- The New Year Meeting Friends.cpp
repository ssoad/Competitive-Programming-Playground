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
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    int x=a[2]-a[0];
    cout<<x<<endl;

}
