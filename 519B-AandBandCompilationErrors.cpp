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
    long n;
    cin>>n;
    vector<long> ini(n), div1(n - 1), div2(n - 2), res(1);
    for(long p = 0; p < ini.size(); p++)
       cin>>ini[p];
    for(long p = 0; p < div1.size(); p++)
        cin>>div1[p];
    for(long p = 0; p < div2.size(); p++)
        cin>>div2[p];
    sort(ini.begin(), ini.end());
    sort(div1.begin(), div1.end());
    sort(div2.begin(), div2.end());
    set_difference(ini.begin(), ini.end(), div1.begin(), div1.end(), res.begin());
    cout<<res[0]<<endl;
    set_difference(div1.begin(), div1.end(), div2.begin(), div2.end(), res.begin());
    cout<<res[0]<<endl;
    stop
}






