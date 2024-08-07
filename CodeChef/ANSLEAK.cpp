#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main() {
    IOS
    // Code Here
    int t;
    cin>>t;
    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;
        for (int i=0; i < n; i++) {
            int arr[m];
            for (int x=0; x < m; x++) arr[x] = 0;
            for (int j=0; j < k; j++) {
                int d;
                cin>>d;
                arr[d-1]++;
            }
            int max = 0;
            int maxI = 1;
            for (int x=0; x < m; x++) {
                if (arr[x] > max) {
                    maxI = x+1;
                    max = arr[x];
                }
            }
            cout<<maxI<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
