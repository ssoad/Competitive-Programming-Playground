/*
1676- A Lucky Number
Author: Md. Sohanuzzaman Soad
Date 22/05/2023
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        int len = a.length();
        int up_count = 0, down_count = 0;
        for(int i = 0; i < 3; i++){
            up_count+=a[i];
            down_count+=a[len-1-i];
        }
        if(up_count == down_count) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}