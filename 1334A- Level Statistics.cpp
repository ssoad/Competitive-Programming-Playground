#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
Author-SohanuzzamanSoad
UniversityofAsiaPacific(UAP),BD

*/

start
{
 int n;
 cin>>n;
 while(n--)
 {
     bool res=true;
     int np;
     cin>>np;
     int p[np],c[np];
     cin>>p[0]>>c[0];
     for(int i=1;i<np;i++)
     {
         cin>>p[i]>>c[i];
         if(p[i-1]>p[i]||p[i]==c[i])
         {
             res=false;
         }
         else if(p[i]<c[i])
         {
             res=false;
         }
         else if(c[i-1]>c[i])
         {
             res=false;
         }
     }

    string r=res?"YES":"NO";
    cout<<r<<endl;


 }
    stop;

}



