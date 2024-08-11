#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n],sum=0;
    int i=0;
    while(n--)
    {
        cin>>a[i];
        sum+=a[i];
        i++;
    }
   cout<<sum;

    return 0;
}
