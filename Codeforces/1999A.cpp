#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<queue>
#include<map>
#include<set>


using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        int sum=0;
        cin >> a[i];
        while(a[i] != 0)
        {
            sum += a[i] % 10;
            a[i] /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}