#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long arr[n],h=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>h)
        {
            h=arr[i];
        }
    }
    long long num=0;
    for(int i=0;i<n;i++)
    {
       if(h==arr[i])
       {
           num++;
       }
    }
    cout<<num;
}
