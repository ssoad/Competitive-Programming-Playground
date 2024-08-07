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
    if (n % 2 == 0) {
        cout << n - 4 << " 4";
    } else {
        cout << n - 9 << " 9";
    }
    stop
}
