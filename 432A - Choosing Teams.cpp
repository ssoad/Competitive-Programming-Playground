#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0;
int a[11];
/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

start

{
   int n, k, x;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        a[x]++;
    }
    int sum = 0;
    for (int i = 0; i <= 5; ++i) {
        if (5 - i >= k) {
            sum += a[i];
        }
    }
    cout << sum / 3 << endl;
    stop
}

