#include<iostream>
using namespace std;

int main()
{
    int h[2];
    cin>>h[0]>>h[1];
    int t[2];
    cin>>t[0]>>t[1];
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],o[n2];
    int num1=0,num2=0;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
        if((t[0]+(a[i]))>=h[0]&&(t[0]+(a[i]))<=h[1])
        {
            num1++;
        }
    }

    for(int i=0;i<n2;i++)
    {
        cin>>o[i];
         if((t[1]+(o[i]))>=h[0]&&(t[1]+(o[i]))<=h[1])
        {
            num2++;
        }
    }

    cout<<num1<<endl<<num2;
}
