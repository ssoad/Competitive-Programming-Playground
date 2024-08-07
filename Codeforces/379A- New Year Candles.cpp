#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

start
{
    int a,b,c;
    cin >> a >> b;
    if(b>a)
        cout << a << endl;
    else
    {
        c=0;
        while(a>0)
        {
            if(a>=b)
            {
            a=a-b+1 ;
            c=c + b;
            }
            else
            {
                c+=a;
                break;
            }
        }
        cout << c << endl;
    }
    stop;

}

