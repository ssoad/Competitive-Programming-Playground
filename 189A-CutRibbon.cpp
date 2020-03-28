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

    int n(0), a(0), b(0), c(0);
    cin>>n>>a>>b>>c;
    int *soad = new int[n + 1];
    for(int k = 0; k <= n; k++)
        {
            soad[k] = 0;
        }
    if(a <= n)
        {
            soad[a] = 1;
        }
    if(b <= n)
        {
            soad[b] = 1;
        }
    if(c <= n)
        {
            soad[c] = 1;
        }
    for(int k = 1; k <= n; k++){
        if(k > a && soad[k - a] > 0 && soad[k] < soad[k - a] + 1)
            {
                soad[k] = soad[k - a] + 1;
            }
        if(k > b && soad[k - b] > 0 && soad[k] < soad[k - b] + 1)
            {
                soad[k] = soad[k - b] + 1;
            }
        if(k > c && soad[k - c] > 0 && soad[k] < soad[k - c] + 1)
            {
                soad[k] = soad[k - c] + 1;
            }
    }

    cout<<soad[n]<<endl;
    stop
}
