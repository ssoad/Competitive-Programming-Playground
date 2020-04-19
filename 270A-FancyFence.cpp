#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
Author-Sohanuzzaman Soad
University of Asia Pacific(UAP),BD

*/

start
{
 int n;
 cin>>n;
    int angle;
    while(n--){
        cin>>angle;
        (360 % (180 - angle) == 0) ? cout<<"YES\n" : cout<<"NO\n";
    }
    stop;

}
