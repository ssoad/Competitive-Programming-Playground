#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int h,m,s;
    string si;
    cin>>h;
    getchar();
    cin>>m;
    getchar();
    cin>>s;
    cin>>si;
    if(si.at(0)=='P')
    {
        if(h<12)
        {
        h+=12;
        }
    }

    if(si.at(0)=='A')
    {
        if(h==12)
        {
        h=00;
        }
    }

   if(h<10)
   {
       cout<<"0"<<h<<":";
   }
   else
   {
       cout<<h<<":";
   }

   if(m<10)
   {
        cout<<"0"<<m<<":";
   }
    else
   {
       cout<<m<<":";
   }

   if(s<10)
   {
        cout<<"0"<<s;
   }
    else
   {
       cout<<s;
   }


    return 0;
}

