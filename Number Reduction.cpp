/*
Codeforces Round # 1 (Div. 2) Problem A
Number Reduction
*/

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    while((cin>>n>>m>>a)&&n>=1)
    {
        cout << ceil((double)n/a)*ceil((double)m/a) << endl;
    }
    return 0;
}

