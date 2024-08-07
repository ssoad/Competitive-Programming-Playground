/*
Problem: 1669A. Deivision ?
Author: Md. Sohanuzzaman Soad
*/

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void findDiv(int rating);

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        int rating;
        cin>>rating;
        findDiv(rating);
    }
    return 0;
}

void findDiv(int rating){

    rating = rating>=1900?1:rating>=1600?2:rating>=1400?3:4;
    switch (rating)
    {
    case 1:
        cout<<"Division 1"<<endl;
        break;
    case 2:
        cout<<"Division 2"<<endl;
        break;
    case 3:
        cout<<"Division 3"<<endl;
        break;
    case 4:
        cout<<"Division 4"<<endl;
        break;
    
    default:
        break;
    }
}