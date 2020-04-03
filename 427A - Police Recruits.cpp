#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
Author-SohanuzzamanSoad
UniversityofAsiaPacific(UAP),BD

*/

start
{
 int n, h= 0, occu= 0, temp;
    cin>>n;
    while(n--){
        cin>>temp;

        if(temp > 0) h+= temp;
        else if(h > 0){
            h--;
        }
        else occu++;
    }

    cout<< occu;

    stop;

}


