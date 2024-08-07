#include <iostream>
#define soads_game int main()
#define stop return 0;
using namespace std;

/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/
soads_game
{
   int n, b(0);
    cin >> n;
    n *= 2;

    while (n /= 2)
        b += n % 2;

    cout << b << endl;
}
