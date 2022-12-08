/*
Codeforces  Round # 734 (Div. 3)
Problem A: Polycarp and Coins
Status: Accepted
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = n / 3;
        int b = n / 3;
        int c = n / 3;
        if (n % 3 == 1)
        {
            a++;
        }
        else if (n % 3 == 2)
        {
            b++;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
