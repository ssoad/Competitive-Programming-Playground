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
	vector<pair<int ,int> > vec;
	int s,n;
	cin>>s>>n;
	bool ch=true;
 	 for(int i=0;i<n;i++){
		 int x,y;
		 cin>>x>>y;
		  vec.push_back(make_pair(x,y));
	 }
	 sort(vec.begin(),vec.end());
	 for(int i=0;i<n;i++){
		 if(s>vec[i].first){
			 s+=vec[i].second;
		 }
		 else{
			 ch=0;
			 break;
		 }
	 		  }
    if(ch)
        cout<<"YES";
    else
        cout<<"NO";
 	stop
}
