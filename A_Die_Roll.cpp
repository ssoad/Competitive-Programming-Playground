/*
Codeforces Round # 9 (Div. 2)
Problem A: Die Roll
Status: Accepted
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;
    int max = y > w ? y : w;
    int min = y < w ? y : w;
    int num = 7 - max;
    int den = 6;
    int gcd = 1;
    for (int i = num; i > 1; i--)
    {
        if (num % i == 0 && den % i == 0)
        {
            gcd = i;
            break;
        }
    }
    cout << num / gcd << "/" << den / gcd << endl;
    return 0;
}
