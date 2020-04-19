
#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0;
int g[11][11];
/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

start
{
   int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        g[1][i]= 1;

    for(int i= 2; i<= n; i++){
        for(int j= 1; j<= n; j++){
            g[i][j]= g[i-1][j]+g[i][j-1];
        }

    }

    cout<< g[n][n] <<endl;
    stop
}


