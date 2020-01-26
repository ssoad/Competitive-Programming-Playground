#include"iostream"
#include"vector"
#include"bits/stdc++.h"
using namespace std;
#define soad_start int main()
#define stop return 0;


soad_start
{
    int k,l,m,n;
    cin>>k>>l>>m>>n;
    long long d;
    cin>>d;
    long long total = 0;
    for(int i = 1; i <= d; i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n== 0)
        {
            ++total;
        }
    }
    cout<<total<<endl;
    stop;
}
