#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ch[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    int l,d,c=0;
    cin>>l>>d;
    for(int i=0;i<n;i++)
    {
        int tmp=i;
        int sum=0;
        for(int j=0;j<d;j++)
        {
            sum+=ch[tmp];
            tmp++;
        }
        if(sum==l)
        {
            c++;
        }
    }
    cout<<c;
}
