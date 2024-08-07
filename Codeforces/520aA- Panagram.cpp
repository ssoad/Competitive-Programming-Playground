#include"iostream"
#include"bits/stdc++.h"
#include"string.h"
#include <algorithm>
using namespace std;

void  toUpperCase(string& str)
{
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
}


int main()
{
    int n;
    string a;
    cin>>n>>a;
    set <char> ls;
    toUpperCase(a);
    for(int i=65;i<91;i++)
    {
        if(!(i>90&&i<97))
        {
            ls.insert(i);
        }

    }
    for(int i=0;i<n;i++)
    {
        ls.erase(a.at(i));
    }
   if(ls.size()==0)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }

    return 0;
}
