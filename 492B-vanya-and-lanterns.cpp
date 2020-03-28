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
    int n, l, mx;
    cin >> n >> l;
    int num[n];
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num, num + n);
    mx = max(num[0], l - num[n - 1]) * 2;
    for (int i = 0; i < n - 1; i++)
        mx = max(mx, num[i + 1] - num[i]);
    cout << fixed << mx / 2.0 << endl;
    stop
}
