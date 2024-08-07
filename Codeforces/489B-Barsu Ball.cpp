#include <iostream>
#include<bits/stdc++.h>
#define soads_game int main()
#define at(a,j) ((a>>j)&1)
#define stop return 0;
using namespace std;

/*
    Author- Sohanuzzaarrn Soad
    University of Asia Pacific (UAP),BD

*/

soads_game
{
  int n, m, pairs(0);
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    int b[m];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (abs(a[i] - b[j]) < 2)
            {
                b[j] = 1000;
                pairs++;
                break;
            }

    cout << pairs << endl;

    stop
}









