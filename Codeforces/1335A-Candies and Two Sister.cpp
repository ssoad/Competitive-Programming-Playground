#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
Author-SohanuzzamanSoad
UniversityofAsiaPacific(UAP),BD

*/

start {
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin>>n;
        cout<<(n%2?n/2:(n/2)-1)<<endl;
    }
    stop;
}
