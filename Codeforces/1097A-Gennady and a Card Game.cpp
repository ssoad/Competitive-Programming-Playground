#include<iostream>
using namespace std;

int main()
{
    const int n = 5;
    string x;
    std::cin >> x;
    string ans = "NO";
    for(long p = 0; p < n; p++)
    {
        string s;
        cin >> s;
        if(s[0] == x[0] || s[1] == x[1])
        {
            ans = "YES";
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
