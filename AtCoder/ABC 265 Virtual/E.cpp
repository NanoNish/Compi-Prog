#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int n, q;
map<pair<ll, ll>, ll> m;
ll a, b, c, d, e, f;

ll dfs(ll x, ll y, int left){
    if(m[{x,y}] == -1)
        return 0;
    ll count{0};
    count += dfs(x + a, y + b, left - 1);
    count += dfs(x + c, y + d, left - 1);
    count += dfs(x + e, y + f, left - 1);
    return count;
}

int main(){
    cin >> n >> q;
    cin >> a >> b >> c >> d >> e >> f;
    loop(i,0,q,1){
        ll x, y;
        cin >> x >> y;
        m[{x, y}] = -1;
    }
    cout << dfs(0, 0, n);
}