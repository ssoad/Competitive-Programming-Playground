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
    long n;
    cin>>n;
    long c(1);
    for(long alc=2;alc*alc<=n;alc++)
    {
        if(!(n%alc))
        c+=2-(alc*alc== n);
    }
    cout<<c<<endl;
    stop
}







