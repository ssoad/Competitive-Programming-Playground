#include <iostream>
#define soads_game int main()
#define stop return 0;
using namespace std;

/*
    Author- Sohanuzzaarrn Soad
    University of Asia Pacific (UAP),BD

*/
soads_game
{
    int a, b, arrs[4][5001], arr[4], res;
   cin >> a;
    for (int i = 1; i <= a; i++) {
        cin >> b;
        arrs[b][arr[b]++] = i;
    }
    res = min(arr[1], min(arr[2], arr[3]));
    cout << res << endl;
    for (int i = 0; i < res; i++) {
        cout << arrs[1][i] << " " << arrs[2][i] << " " << arrs[3][i] << endl;

    }
stop

}


