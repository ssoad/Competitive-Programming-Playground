#include<iostream>
using namespace std;

int main()
{
    int k1[3],k2[3],i=0;
    cin>>k1[0]>>k1[1]>>k2[0]>>k2[1];

    while(true)
    {
        if((k2[0]>k1[0]&&k2[1]>k1[1])||(k1[0]>k2[0]&&k1[1]>k2[1])||(k1[1]==k2[1]))
            {
                cout<<"NO";
                break;
            }
        if((k1[0]+=k1[1])==(k2[0]+=k2[1]))
            {
                cout<<"YES";
                break;
            }
    }
return 0;
}
