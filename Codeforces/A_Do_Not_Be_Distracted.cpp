#include <bits/stdc++.h>
#include <iostream>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        map<char, int> result_map;
        for (int i = 65; i < 98; i++)
        {
            result_map[i] = 0;
        }
        bool Isfound = false;
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
            {
                if (str[i] != str[i - 1] && result_map[str[i]] & 11)
                {
                    Isfound = true;
                    break;
                }
            }
            result_map[str[i]]++;
        }
        string result = !Isfound ? "YES" : "NO";
        cout << result << endl;
    }
    return 0;
}