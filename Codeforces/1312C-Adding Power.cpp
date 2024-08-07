#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<double, int> pdi;
typedef pair<int, double> pid;
typedef tuple<int, int, int> tiii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<double> vd;
#define CONTAINS(set, x) (set.find(x) != set.end())
#define FOR(i, a, b) for(int i=(a);i<(b);i++)
#define ROF(i, a, b) for(int i=(b)-1;i>=(a);--i)
#define fi first
#define se second
#define bk back()
#define ft front()
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) x.size()
#define trav(v,x) for(auto& v : x)
const ll MOD = 1e9+7;
template<class T> T gcd(T a,T b){return b?gcd(b,a%b):a;}
template<class T> T modpow(T a,T b,T m){T res=1;for(;b;b/=2,a=(a*a)%m)if(b&1)res=(res*a)%m;return res;}

const int MAXN = 31;
int t, n;
ll k, a[MAXN];

vi bc(ll x, ll b) {
    vi ex;
    while (x > 0) {
        ll c = 1;
        int i = 0;
        while (c*b <= x) {
            c *= b;
            i++;
        }
        x -= c;
        ex.pb(i);
    }
    sort(all(ex));
    return ex;
}

void Solve()
{
    cin >> t;
    while (t--) {
        vi pws;
        cin >> n >> k;
        FOR(i, 0, n) cin >> a[i];
        FOR(i, 0, n) trav(p, bc(a[i], k)) pws.pb(p);
        sort(all(pws));
        bool pos = true;
        if (sz(pws) <= 1) {
            pos = true;
        } else {
            FOR(i, 0, sz(pws)-1) if (pws[i] >= pws[i+1]) {
                pos = false; break;
            }
        }
        if (pos) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(6);
    Solve();
    return 0;
}


