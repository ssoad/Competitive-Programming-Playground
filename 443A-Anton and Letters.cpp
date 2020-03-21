#include<iostream>
#include<bits/stdc++.h>
#define stop return 0;
#define soad_start int main()
using namespace std;

soad_start
{
    vector<char> vec;
    char a;
    while(cin>>a)
    {
        if(a=='}')
        {
            break;
        }
        if(a>='A'&&a<='z')
        {
            vec.push_back(a);
        }


    }

    sort( vec.begin(), vec.end() );
    vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
    cout<<vec.size();
    stop
}


