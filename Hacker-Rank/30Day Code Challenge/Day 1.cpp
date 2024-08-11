#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int a;
    double b;
    string c,d;
    cin>>a;
    cin>>b;
    getchar();
    getline(cin,c);
    a=(int)a+b;
    b=(double)b+b;
    d="HackerRank "+c;
    cout<<a<<endl;
    printf("%.1f\n",b);
    cout<<d<<endl;
    return 0;
}
