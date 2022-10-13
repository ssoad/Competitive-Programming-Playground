#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
   string t;
   cin >> t;
    for (int i = 0; i < t.length(); i++){
        if (t[i] == '.'){
            cout << 0;
        }
        else if (t[i] == '-' && t[i+1] == '.'){
            cout << 1;
            i++;
        }
        else if (t[i] == '-' && t[i+1] == '-'){
            cout << 2;
            i++;
        }
    }
  
    return 0;
}