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
   int t,x,n,m,i;
    cin>>t;
    while(t--){
        cin>>x>>n>>m;
        if(x<20){
         for(i=0;i<m;i++){
            x=x-10;
        }
        }
        else{
        for(i=0;i<n;i++){
            x=(x/2)+10;
        }
        for(i=0;i<m;i++){
            x=x-10;
        }
        }
        if(x<=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    stop;

}






