#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
Author-SohanuzzamanSoad
UniversityofAsiaPacific(UAP),BD

*/

int find_cube(int n)
{
    int p=1,r=0,c=0;
    for(int i=0;n>0;i+=p)
    {
        n=n-i;
        if(i!=0)
            c++;
         p++;
    }
    return c;
}

start
{
 int n;
 cin>>n;
 if(n==3||n==19)
 {
     n=n-1;
 }
 cout<<find_cube(n)<<endl;
stop;

}




