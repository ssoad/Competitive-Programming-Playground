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
    int arr[2],c=0;
    cin >> arr[0]>>arr[1];
    while(arr[0] < arr[1])
    {
        (arr[1] % 2) ? (++arr[1]) : (arr[1] /= 2);
        ++c;
    }
    cout<<c+arr[0]-arr[1]<<endl;
    stop
}





