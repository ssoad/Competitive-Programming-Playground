#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
Author-SohanuzzamanSoad
UniversityofAsiaPacific(UAP),BD

*/

start {
    int sh,dy;
    string a="";
    cin >> sh;
    int shop[sh];

    for(int i=0;i<sh;i++)
    {
        cin>>shop[i];
    }
    cin>>dy;
    long long day[dy],day1[dy];
    for(int i=0;i<dy;i++)
    {
        cin>>day[i];
    }
    sort(shop,shop+sh);
    for(int i=0;i<dy;i++)
    {
       long long c=0;
       for(int j=0;j<sh;j++)
       {
           if(day[i]<shop[j])
           {
               break;
           }
           else
           {
               c++;
           }
       }
       cout<<c<<endl;
       //day1[i]=c;
    }

}

