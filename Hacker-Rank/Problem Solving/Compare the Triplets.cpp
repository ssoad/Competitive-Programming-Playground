#include<iostream>
using namespace std;

int main()
{
    int a[3],b[3],al=0,bo=0;
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            al++;
        }
        else if(b[i]>a[i])
            {
                bo++;
            }
    }
    cout<<al<<" "<<bo;

    return 0;
}
