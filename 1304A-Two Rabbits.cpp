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
	int n;
	cin>>n;
    long long a,b,x,y,temp,temp1,st=0;
	while(n--)
    {
        st=0;
        cin>>x>>y>>a>>b;
        if(((y-x)%(a+b))==0)
        {
            cout<<(y-x)/(a+b)<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
 	stop
}

