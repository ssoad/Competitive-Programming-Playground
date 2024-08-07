#include <bits/stdc++.h>
using namespace std;
#define LIMIT 1000000
#define ll long long
ll i, j;
ll ISprime[LIMIT];
void calculate_prime(){
    ISprime[0] = ISprime[1] = 1;
    for(i=2;i<LIMIT;i++){
        if (ISprime[i]==0){
            for(j=i*i;j<LIMIT;j+=i){
                ISprime[j] = 1;
            }
        }
    }
}
int checksquare(ll n){
    double sqrt_n = sqrt(n);
    if(sqrt_n == int(sqrt_n)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    calculate_prime();
    ll t, n;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        if ((n==4)||(checksquare(n)==1 && ISprime[int(sqrt(n))]==0)){
            cout<<"YES"<<endl;
        }
        else if (n%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
