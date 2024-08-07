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
    int n;
    cin >> n;

    map<string, int> mp;
    string s;
    while (n--)
    {
        cin >> s;
        if (mp.count(s) == 0)
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s] += 1;
        }
    }
    stop
}
