#include<iostream>
using namespace std;

#define soads_game int main()

soads_game
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        long long sum=0;
        cin>>a;
        for(int i=0;i<a.length();i++)
        {
            sum+=a.at(i)-'0';
        }
        cout<<sum<<endl;
    }
}
