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
   ll a[4];
   cin>>a[0]>>a[1]>>a[2]>>a[3];
   sort(a,a+4);
   for(int i=0;i<3;i++)
   {
       int x=a[3]-a[i];
       cout<<x<<" ";
   }
    stop;

}




