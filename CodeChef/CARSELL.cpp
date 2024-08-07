#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
Author-SohanuzzamanSoad
UniversityofAsiaPacific(UAP),BD

*/

start
{
    int n;
    cin>>n;
    while(n--)
    {

        int t;
        cin>>t;
        int arr[t];
        for(int i=0; i<t; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+t, greater<int>());
        long sum=0;
        long mod = 1000000007;
        for (int i = 0; i < t; i++)
        {
            if (arr[i] - i > 0)
            {
                sum = (sum % mod + arr[i] % mod - i % mod) % mod;
            }
            else
            {
                break;
            }
        }
        cout<<sum<<endl;
    }
    stop;

}






