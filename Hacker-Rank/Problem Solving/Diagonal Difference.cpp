#include<iostream>
using namespace std;

int main()
{
    int n,diff;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    //first diagonal//
    int a=0;
    for(int i=0;i<n;i++)
    {
        a+=arr[i][i];
    }

    int b=0;
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        b+=arr[i][j];
        j--;
    }
    int f;
    if(a>b)
    {
        diff=a-b;
    }
    else
    {
        diff=b-a;
    }
    cout<<diff;

}
