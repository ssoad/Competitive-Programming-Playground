#include <iostream>
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
   int a;
   cin >> a;
   cout << (at(a,5)<<5) + (at(a,4)<<0) + (at(a,3)<<2) + (at(a,2)<<3) + (at(a,1)<<1) + (at(a,0)<<4) << endl;
    return 0;
}

    stop
}





