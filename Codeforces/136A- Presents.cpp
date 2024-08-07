#include<iostream>
using namespace std;
#define soads_game int main()


soads_game
{
    int n, p;
    cin >> n;
    int f[n];
    int t=n;
    int i=0;
    while(n--)
    {
        cin >> p;
        f[p - 1] = i + 1;
        i++;
    }
    for(int j = 0; j < t; j++)
    {
        cout << f[j] << " ";
    }

    return 0;
}
