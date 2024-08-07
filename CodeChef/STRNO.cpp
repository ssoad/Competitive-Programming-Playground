#include"iostream"
#include <list>
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
        int x,k,a;
        cin>>x>>k;
        a=x;
        list<int> ls;
        while(a%2==0)
        {
            ls.push_back(2);
            //ls.insert(2);
            a/=2;
        }

        for(int i=3;i*i<=a;i+=2)
        {
            while(a%i==0)
            {
                 ls.push_back(i);
                //ls.insert(i);
                a/=i;
            }
        }
        if(a>2)
        {
             ls.push_back(a);
            //ls.insert(a);
        }
        if(ls.size()<k)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }

    }
    stop;

}







