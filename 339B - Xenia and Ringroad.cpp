#include"iostream"
#include"bits/stdc++.h"
using namespace std;

#define start int main()
#define stop return 0;
start
{
    int n, m,l=1;
    cin>>n>>m;
    long long res = 0;
    for(int i=0; i<m; i++)
    {
        int point;
        cin>>point;
        if(point >= l)
        {
            res += point - l;
        }
            else
        {
            res += n - (l - point);
        }
            l = point;
    }
    cout << res << endl;
    stop
}
