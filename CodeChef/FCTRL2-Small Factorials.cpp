#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define soads_game int main()


soads_game
{

   int t,j;
   scanf("%d",&t);
   while(t--)
   {
     int n;
     scanf("%d",&n);
     int a[1000] = {1};
     int m = 0;
     int carry = 0;
     for(int i=1; i<=n; i++)
     {
       for(j=0; j<=m; j++)
       {
         a[j] = (a[j]*i)+carry;
         carry = a[j]/10;
         a[j] = a[j]%10;
       }
       while(carry)
       {
         m++;
         a[m] = carry%10;
         carry/=10;
       }
     }

     for(int i=m; i>=0; i--)
        printf("%d",a[i]);
     printf("\n");
   }
   return 0;
}


