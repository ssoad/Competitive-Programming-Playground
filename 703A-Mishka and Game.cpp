#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

start
{
    int n;
	cin>>n;
	int big = 0;
	int s = 0;
	int e = 0;
	for (int i = 1;i <= n;++i) {
		int a, b;
		cin>>a>>b;
		if (a > b) {
			big++;
		}
		else if (a == b) {
			e++;
		}
		else {
			s++;
		}
	}
	if (big > s) {
		cout<<"Mishka"<<endl;
	}
	else if (big == s) {
		cout<<"Friendship is magic!^^"<<endl;
	}
	else {
		cout<<"Chris"<<endl;
	}
    stop;

}
