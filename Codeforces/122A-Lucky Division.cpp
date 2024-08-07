#include<iostream>
using namespace std;
#define soads_game int main()
int arr[12]={4,7,47,74,44,444,447,474,477,777,774,744};

soads_game
{
    int num;
    cin>>num;
    bool flag=0;

    for(int i=0; i<12; i++)
    {
        if(num%arr[i]==0)
        {
            flag=true;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
