#include<iostream>
using namespace std;

int main()
{
    int n,sum,c=0;
    cin>>n>>sum;
    int num[n];

    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }

    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                s=num[i]+num[j];
                if(s%sum==0)
                    {
                        c++;
                    }
            }
        }



    }
        cout<<c;

        return 0;
}
