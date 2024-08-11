#include<iostream>
using namespace std;

void review(string a)
{
    for(int i=0;i<a.size();i+=2)
    {
        cout<<a.at(i);
    }
    cout<<" ";
    for(int i=1;i<a.size();i+=2)
    {
        cout<<a.at(i);
    }
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        review(a);
        cout<<endl;
    }
    return 0;
}

