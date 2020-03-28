#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define sssoad int main()
#define stop return 0

int alpha,bita;

sssoad
{
        cin>>alpha>>bita;
    if(alpha>bita)
    {
        swap(alpha,bita);

    }
    int x=(bita-alpha)/2;
    cout<<alpha<<" "<<x<<endl;
    stop;
}
