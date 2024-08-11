#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=10,j=1;;
    while(i--)
    {
        cout<<n<<" x "<<j<<" = "<<n*j;
        if(j!=10)
        {
            cout<<endl;
        }
        j++;
    }
    return 0;
}
