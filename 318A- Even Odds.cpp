#include <iostream>
#define soads_game int main()
#define stop return 0;
using namespace std;
int main(){
long long n, k;
cin>>n>>k;
n=(n+1)/2;
if(k>n)
{
    cout<<2*(k-n)<<endl;
}
else
{
    cout<<(2*k-1)<<endl;
}
stop
}
