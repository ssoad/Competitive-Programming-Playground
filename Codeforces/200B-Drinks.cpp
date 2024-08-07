#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,tmp;
    double res=0;
    cin>>n;
    tmp=n;
    int a;
    while(n--)
    {
        cin>>a;
        res+=a;
    }
    printf("%.12f",(double)res/tmp);

}
