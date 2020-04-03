#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
Author-SohanuzzamanSoad
UniversityofAsiaPacific(UAP),BD

*/

start
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    if(m*a>b)
    {
        int rm=(n%m)*a;
        if(rm>b)
            cout<<n/m*b+b<<endl;
        else
            cout<<n/m*b+rm<<endl;
    }
    else
        cout<<n*a<<endl;
    stop;

}
