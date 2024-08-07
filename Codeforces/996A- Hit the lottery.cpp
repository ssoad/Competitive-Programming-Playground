#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0
#define ll long long

priority_queue<int> lott;
/*
Author-SohanuzzamanSoad
UniversityofAsiaPacific(UAP),BD

*/

start
{
    ll int xm,find=0;
    cin>>xm;
    lott.push(100);
    lott.push(20);
    lott.push(10);
    lott.push(5);
    lott.push(1);
    while(xm){
        while(lott.top()<=xm){
            find++;
            xm-=lott.top();
        }
        lott.pop();
    }
    cout<<find<<endl;
    stop;

}



