

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
    int n, t;
    cin>>n>>t;
    if(t == 10)
    {
        if(n == 1)
        {
            cout<<"-1";

        }
        else
        {
            cout<<"1";
            for(int p = 0; p < n - 1; p++)
            {
                cout<<"0";
            }
        }
    }
    else
    {
        for(int p = 0; p < n; p++)
        {
            cout<<t;
        }
    }

    stop
}






