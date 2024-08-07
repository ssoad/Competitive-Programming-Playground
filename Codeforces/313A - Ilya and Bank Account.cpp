
#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0;

/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

start
{
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        cout << max(a, b) << endl;
    }
    stop
}
