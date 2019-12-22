#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,m,a;
    while((cin>>n>>m>>a)&&n>=1)
    {
         printf("%.0lf\n",ceil(n/a)*ceil(m/a));
    }
    return 0;
}

