#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long game[n],h=0,l=0;
    for(int i=0;i<n;i++)
    {
        cin>>game[i];
    }
    long long tmp=game[0],tmp1=game[0];
    for(int i=1;i<n;i++)
    {

        if(tmp<game[i])
        {
            tmp=game[i];
            h++;
        }
        if(tmp1>game[i])
        {
            tmp1=game[i];
            l++;
        }

    }
    cout<<h<<" "<<l;

    return 0;
}
