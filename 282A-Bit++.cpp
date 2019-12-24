#include <iostream>
using namespace std;

int main()
{
    int n,r=0;
    cin >> n;

    string soad;
    while (n--)
    {
        cin >> soad;
        if (soad[1]=='+')
            r++;
        else
            r--;
    }
    cout<<r<<endl;
    return 0;
}
