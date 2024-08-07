#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0;

/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

start
{
    string s;
    int n;
    int sum= 0;
    cin>>n;
    while(n--){
        cin>>s;
        if(s == "Tetrahedron") sum+= 4;
        else if(s == "Cube") sum+= 6;
        else if(s == "Octahedron") sum+= 8;
        else if(s == "Dodecahedron") sum+= 12;
        else if(s == "Icosahedron") sum+= 20;
    }
    cout<< sum <<endl;
    stop
}
