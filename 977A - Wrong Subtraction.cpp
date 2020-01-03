#include<bits/stdc++.h>
using namespace std;



int call(int n, int cnt){
    if(cnt==0)
        return n;
    if(n%10!=0)
        call(n-1,cnt-1);
    else
        call(n/10,cnt-1);

}
main()
{
    int n,k;
    cin>> n>>k;
    cout<<call(n,k)<<endl;
}


//another_way//

#include "iostream"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    while(m){
        if(n%10!=0) n-=1;
        else n/=10;
        m--;
    }
    cout<<n<<endl;
    return 0;
}
