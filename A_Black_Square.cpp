
#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    // code goes here
    int a[4],sum=0;
    string s;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        sum += a[s[i] - '0' - 1];
    }

    cout<<sum<<endl;

    return 0;
}