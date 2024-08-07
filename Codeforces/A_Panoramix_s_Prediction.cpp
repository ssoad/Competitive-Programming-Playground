/*
Problem: A. Panoramix's Prediction
Author: Md. Sohanuzzaman Soad
*/

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void primeChecker();
int main()
{
    fastio;
    // code goes here
    primeChecker();

    return 0;
}

void primeChecker()
{
    int m, n, p, i, j;
    cin >> m >> n;
    for (i = m+1; i <= n; i++)
    {
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
        {
            p = i;
            break;
        }
    }
    if(n==p)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}