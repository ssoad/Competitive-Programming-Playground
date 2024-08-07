#include <iostream>
#include<bits/stdc++.h>
#define soads_game int main()
#define at(a,j) ((a>>j)&1)
#define stop return 0;
using namespace std;

/*
    Author- Sohanuzzaarrn Soad
    University of Asia Pacific (UAP),BD

*/
soads_game
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n;
        x=1;
        int sum=0;
        for(int i=x;i<n+2;i*=2)
        {
            sum+=i;
            if(sum==n)
            {
                break;
            }
            if(sum>n)
            {
                sum=0;
                x+=1;
                i=x;

            }


        }
        cout<<x<<endl;

    }

    stop
}







