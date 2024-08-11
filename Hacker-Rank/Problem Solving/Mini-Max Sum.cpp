#include<iostream>
using namespace std;

int main()
{
    unsigned long long arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    unsigned long long res[5];
    for(int i=0;i<5;i++)
    {
        long long sum=0;
        int ex=0;
        for(int j=0;j<5;j++)
        {
            if(j!=i)
            {
                sum+=arr[j];
            }
           ;
        }
         ex++;
        res[i]=sum;
    }


    unsigned long long m,mi;
    m=res[0];
    mi=res[0];
    for(int i=0;i<5;i++)
    {
        if(res[i]>m)
        {
        m=res[i];
        }
         if(res[i]<mi)
        {
            mi=res[i];
        }
    }

    cout<<mi<<" "<<m;

    return 0;
}
