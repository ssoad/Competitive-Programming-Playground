#include <iostream>
#define soads_game int main()
#define at(a,j) ((a>>j)&1)
#define stop return 0;
using namespace std;

/*
    Author- Sohanuzzaarrn Soad
    University of Asia Pacific (UAP),BD

*/
void find_res(int n)
{
    if(n==0)
  {
    cout<<0<<endl;
  }
  else if(n==1)
  {
    cout<<0<<endl;
  }
  else if(n==2)
  {
    cout<<1<<endl;
    cout<<2<<endl;
  }
  else if(n==3)
  {
    cout<<1<<endl;
    cout<<3<<endl;
  }
  else
  {
    if(n%2==0)
    {
      cout<<n/2<<endl;
      for(int i=0; i<n/2; i++)
      {
        cout<<2<<" ";
      }
      cout<<endl;
    }
    else
    {
      int rem = n-3;
      cout<<rem/2+1<<endl;
      for(int i=0; i<rem/2; i++)
      {
        cout<<2<<" ";
      }
      cout<<3<<endl;
    }
  }
}

soads_game
{
  int n;
  cin>>n;
  find_res(n);
    stop
}








