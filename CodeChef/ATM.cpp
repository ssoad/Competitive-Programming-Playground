#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define soads_game int main()

soads_game
{
    int amount;
    float bal;
    cin>>amount>>bal;
    if((bal>amount+0.5)&& (amount%5==0))
    {
        cout<<fixed<< setprecision(2)<<bal-amount-0.5f<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(2)<<bal<<endl;
    }
    return 0;
}
