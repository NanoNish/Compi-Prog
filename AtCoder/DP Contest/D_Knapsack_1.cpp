#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    ll n, k;
    cin >> n >> k;
    ll w[n]{}, v[n]{}, dp[k + 1]{};
    loop(i, 0, n, 1) cin >> w[i] >> v[i];
    loop(i,0,n,1){
        for(auto j{k-w[i]}; j > -1; j--){
            dp[j + w[i]] = max(dp[j + w[i]], dp[j] + v[i]);
        }
    }
    ll mx{};
    loop(i, 0, k + 1, 1) mx = max(mx, dp[i]);
    cout << mx;
}