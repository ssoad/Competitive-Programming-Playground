#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numS;
    scanf("%d\n",&numS);
    int cS = 0,minS = 101,maxS = 0,minP = 100,maxP = 0;
    for(int k = 0; k < numS; ++k)
    {
        scanf("%d",&cS);
        if(cS >  maxS)
        {
            maxP = k;
            maxS = cS;
        }
        if(cS <= minS)
        {
            minP = k;
            minS = cS;
        }
    }
    int res = maxP + (numS - 1 - minP);
    if(minP < maxP)
    {
        --res;
    }
    printf("%d\n",res);
    return 0;
}
