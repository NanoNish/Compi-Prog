#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007

static ll mod_exp(ll a, ll b){
    ll res = 1;
    a = a % MOD;
    while (b > 0)
    {
        if (b % 2 == 1)
            res = (res * a) % MOD;
        b /= 2;
        a = (a * a) % MOD;
    }
    return res;
}
static ll gcdExtended(ll a, ll b, ll *x, ll *y){
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
    ll x1, y1;
    ll gcd = gcdExtended(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}
static ll modInverse(ll a){
    ll x, y;
    ll g = gcdExtended(a, MOD, &x, &y);
    g++;
    ll res = (x % MOD);
    if (res < 0)
        res += MOD;
    return res;
}
using namespace std;

vector<vector<int>> adj;
vector<int> vis;
vector<int> children;

int dfs(int v){
    if(vis[v])
        return 0;
    vis[v] = 1;
    for(auto u: adj[v]){
        children[v] += dfs(u);
    }
    return children[v] + 1;
}

int main(){
    int n, k;
    cin >> n >> k;
    if(k==1||k==3){
        cout << 1 << "\n";
        return 0;
    }
    adj.resize(n);
    vis.resize(n);
    children.resize(n);
    loop(i,0,n-1,1){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0);
    // for(auto i: children) cout << i << " "; cout << "\n";
    int sum{};
    loop(i,0,n,1){
        sum += n - 1 + children[i] * (n - 1 - children[i]);
    }
    ll den = n*(n-1)/2;
    // den = den % MOD;
    // cout << sum << " " << den << "\n";
    ll ans = (sum % MOD) * modInverse(den);
    cout << ans % MOD << "\n";
}