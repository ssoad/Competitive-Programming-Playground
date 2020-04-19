#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <ctype.h>
#include <queue>
#include <map>
#include <set>

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ll i, j, k;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll cases;
    ll numStudents;
    ll skill;
    char boardItem;
    vector<int> spots = {0, 12, 24, 28, 40, 52, 56, 68, 80};
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
    	vector<vector<int>> board(9, vector<int>(9));
        for(int j = 0; j < 9; j++)
        {
            for(int k = 0; k < 9; k++)
            {
                cin >> boardItem;
                board[j][k] = boardItem - '0';
            }
        }

        for(j = 0; j < spots.size(); j++)
        {
            int spot = spots[j];
            int oldVal = board[spot/9][spot%9];
            if(oldVal == 9)
                board[spot/9][spot%9] = 1;
            else
                board[spot/9][spot%9] = (board[spot/9][spot%9] + 1) % 10;
        }
        for(auto row : board)
        {
            for(auto item : row)
            {
                cout << item;
            }
            cout << "\n";
        }
    }

    return 0;
}
