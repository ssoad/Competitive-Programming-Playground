#include<iostream>
using namespace std;
#define soads_game int main()
int arr[5];

soads_game
{
    int n,a;
    int sum=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        arr[a]++;
    }

    sum+=arr[4];
    sum+=arr[2]/2;
    arr[2]=arr[2]%2;
    if(arr[1]>=arr[3])
    {
        sum+=arr[3];
        arr[1]=arr[1]-arr[3];
        sum+=arr[1]/4;
        arr[1]=arr[1]%4;
        if(arr[1]+arr[2]*2<=4&&arr[1]+arr[2]*2>0)
        {
            sum++;
        }
        else if(arr[1]==3&&arr[2]==1)
        {
            sum+=2;
        }
    }
    else
    {
        sum+=arr[1];
        arr[3]=arr[3]-arr[1];
        sum+=arr[3]+arr[2];
    }

    cout<<sum;
    return 0;
}
