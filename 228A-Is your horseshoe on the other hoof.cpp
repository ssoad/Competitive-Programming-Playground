#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

int main()
{
    int num[4],ans=0;
    for (int i = 0; i < 4; i++) {
        cin >> num[i];
    }
    sort(num, num + 4);
    for (int i = 0; i < 3; i++) {
        if (num[i] != num[i + 1]) {
            ans++;;
        }
    }
    cout << 3-ans;
    return 0;
}
