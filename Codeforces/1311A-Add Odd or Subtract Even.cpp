#include <iostream>
using namespace std;
#define sssoad int main()
#define stop return 0
sssoad
{
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b;
		if(b==a)
		   cout<<0<<endl;
		else if(b>a){
			c=b-a;
			int res= c%2?1:2;
			cout<<res<<endl;
		}else if(b<a){
			c=a-b;
			int res= c%2?2:1;
			cout<<res<<endl;
		}
	}
    stop;
}
