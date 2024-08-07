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
    ll length;
    ll thisNum;
    cin >> cases;
    for(i = 0; i < cases; i++)
    {
        cin >> length;
        map<int, vector<int>> solveMap;
        for(j = 0; j < length; j++)
        {
            cin >> thisNum;
            solveMap[thisNum].push_back(j);
        }

        int maxVal = 0;
        for(auto itr = solveMap.begin(); itr != solveMap.end(); itr++)
        {
            maxVal = max(maxVal, (int)itr->second.size());
            for(auto itr2 = solveMap.begin(); itr2 != solveMap.end(); itr2++)
            {
                if(itr != itr2)
                {
                    for(j = 0; j < itr->second.size() / 2; j++)
                    {
                        int leftVal = itr->second[j];
                        int rightVal = itr->second[itr->second.size() - j - 1];
                        int between = 0;
                        //cout << "using: " << itr->first << " " << leftVal << " " << rightVal << "\n";
                        //cout << "to find in: " << itr2->first << "\n";
                        for(k = 0; k < itr2->second.size(); k++)
                        {
                            int val = itr2->second[k];
                            if(val > leftVal && val < rightVal)
                            {
                                between++;
                            }
                        }
                        maxVal = max(maxVal, between + (int)(j + 1) * 2);
                    }
                }
            }
        }

        cout << maxVal << "\n";
	}

    return 0;
}
