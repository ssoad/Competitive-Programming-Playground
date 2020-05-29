#include"iostream"
#include "vector"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
Author-Sohanuzzaman Soad
University of Asia Pacific(UAP),BD

*/



int main(){

    const int N = 100100;
    long n; scanf("%ld\n", &n);
    vector<long> rest(N + 1, 0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        ++rest[x];
    }

    for(long p = 1; p <= N; p++){rest[p] += rest[p - 1];}

    long q; scanf("%ld\n", &q);
    while(q--){
        long a; scanf("%ld\n", &a);
        printf("%ld\n", rest[(a <= N) ? a : N]);
    }

    return 0;
}
