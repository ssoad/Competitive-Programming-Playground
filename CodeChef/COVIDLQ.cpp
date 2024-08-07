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

     int np;
     cin>>np;
     int lst_cp=-6;
     bool is_vio=false;
     for(int i=0;i<np;i++)
     {
         int sp_type;
         cin>>sp_type;
         if(sp_type)
         {
             if(i-lst_cp<6)
             {
                 is_vio=true;
             }
             lst_cp=i;
         }
     }
     if(!is_vio)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
 }
stop;

}





