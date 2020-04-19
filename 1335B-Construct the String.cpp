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
int t;
cin>>t;
while(t--)
{
	int n,a,b,i,j,temp,count=0;
	cin>>n>>a>>b;
	string s="";
	for(i=1;i<=n;i+=a)
	{
		count=0;
		temp=97;
		for(j=1;j<=a;j++)
		{

			if(count==b) {
				temp=97;
				count=0;
			}
			s.push_back(temp);
			temp++;
			count++;
		}
	}
	for(int i=0;i<n;i++) cout<<s[i];
	cout<<endl;
	}
stop;
}
