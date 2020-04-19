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
    int n;
    cin>>n;
    while(n--)
    {
        long long a,b,c,d,x=0,y=0,z=0;
        cin>>a>>b>>c>>d;
        if(a>b)
            x=a;
        else
            x=b;
        if(b>c)
            y=b;
        else
            y=c;
        if(c<d)
            z=c;
        else
            z=d;
            cout<<x<<" "<<y<<" "<<z<<endl;
    }
    stop;

}





