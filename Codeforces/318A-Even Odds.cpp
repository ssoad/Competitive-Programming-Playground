#include<iostream>
using namespace std;
#define soads_game int main()
#define stop return 0;


soads_game
{
  long long  n,k;
  cin>>n;
  int a[n*2],index=0;


      for(int j=1;j<=n;j+=2)
      {
          a[index]=j;
          index++;

      }

      for(int j=2;j<=n;j+=2)
      {
          a[index]=j;
          index++;

      }
      cin>>k;
      cout<<a[k-1];

    stop
}

