#include<iostream>
#define stop return 0;
using namespace std;

int main(){
    int n;
    string h= "HARD";
    string e= "EASY";
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        if(c==1){
            cout<<h;
            stop
        }
    }
    cout<<e;
    stop
}
