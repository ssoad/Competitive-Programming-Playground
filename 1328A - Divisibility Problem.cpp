#include <iostream>
using namespace std;
#define sssoad int main()
#define stop return 0
sssoad
{
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int res= a%b==0?0:b-a%b;
	    cout<<res<<endl;
	}
	stop;
}
