#include"iostream"
#include"vector"
#include"bits/stdc++.h"
using namespace std;
#define soad_start int main()
#define stop return 0;
typedef pair<int, int> ii;
vector<int> v;

soad_start
{
    int n, m;
    cin >> n ;
    for (int i = 0; i < n; ++i) {
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; ++i) {
        cout<<v[i]<<" ";
    }
    stop;
}
