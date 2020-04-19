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
    long n, m;
    cin >> n >> m;
    bool color(false);
    for(int row = 0; row < n; row++)
    {
        if(color)
        {
            break;
        }
        for(int col = 0; col < m; col++)
        {
            char x;
            cin >> x;
            if(x == 'C' || x == 'M' || x == 'Y')
            {
                color = true;
                break;
            }
        }
    }

    cout << (color ? "#Color" : "#Black&White") << endl;
    stop
}







