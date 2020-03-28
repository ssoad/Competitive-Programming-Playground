#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0;

/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

const int siz = 100010;
long long a[siz];
long long include[siz], exclude[siz];
int main() {
    int n, elm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        a[elm]++;
    }
    include[1] = a[1];
    exclude[1] = 0;
    include[2] = 2 * a[2];
    exclude[2] = include[1];
    long long mx = max(include[2], exclude[2]);
    for (int i = 3; i <= siz; ++i) {
        include[i] = i * a[i] + max(include[i - 2], exclude[i - 2]);
        exclude[i] = max(include[i - 1], exclude[i - 1]);
        long long tmp = max(include[i], exclude[i]);
        mx = max(mx, tmp);
    }
    cout << mx << endl;
    return 0;
}
