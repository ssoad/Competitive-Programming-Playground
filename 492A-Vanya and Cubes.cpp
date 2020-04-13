#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
Author-SohanuzzamanSoad
UniversityofAsiaPacific(UAP),BD

*/
long long Find_Cube(long long n)
{
    long a = 0;
    while(a * (a + 1) * (a + 2) <= 6 * n)
    {
        ++a;
    }
    --a;
    return a;
}

start
{
    long long n;
    cin>>n;
    cout<<Find_Cube(n)<<endl;
    stop;

}




