#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        int h=1;
        for(int i = 1;i<=num;i++)
            {
                if(i%2 != 0)
                {
                    h*=2;
                }
                if(i%2==0)
                {
                    h++;
                }
        }
        cout<<h<<endl;
    }
}

