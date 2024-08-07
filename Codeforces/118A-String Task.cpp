#include<iostream>
#include <cstring>
#include <cstdio>
using namespace std;

/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

int main()
{
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        if((a.at(i)=='A')||(a.at(i)=='a')||(a.at(i)=='O')||(a.at(i)=='o')||(a.at(i)=='Y')||(a.at(i)=='y')||(a.at(i)=='E')||(a.at(i)=='e')||(a.at(i)=='U')||(a.at(i)=='u')||(a.at(i)=='I')||(a.at(i)=='i'))
        else
        {
            cout<<".";
            putchar(tolower(a.at(i)));

        }
    }
    return 0;
}
