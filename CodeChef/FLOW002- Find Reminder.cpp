#include<iostream>
using namespace std;

#define soads_game int main()

soads_game
{
   int a,b,n;
   cin>>n;
   while(n--)
   {
        cin>>a>>b;
        cout<<a%b;
   }

   return 0;
}
