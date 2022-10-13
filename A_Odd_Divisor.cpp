#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    // fastio;
    //  code goes here
    int t;
    cin >> t;

    while (t--)
    {
        // code goes here
        long long int n;
        cin >> n;
        if (n & 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool ok = false;
            long long div = n;

            for (long long i = n; i > 2; i /= 2)
            {
                if (i & 1 && n % i == 0)
                {
                    ok = true;
                    break;
                }
            }

            string result = ok ? "YES" : "NO";
            cout << result << endl;
        }
    }
    return 0;
}