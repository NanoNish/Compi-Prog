#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 998244353
using namespace std;

int main(){
    ll arr[6]{};
    loop(i, 0, 6, 1) cin >> arr[i];
    loop(i, 0, 6, 1) arr[i] %= MOD;
    ll x, y;
    x = arr[0] * arr[1] * arr[2];
    y = arr[3] * arr[4] * arr[5];
    x %= MOD;
    y %= MOD;
    if(x >= y)
        x -= y;
    else
        x = x - y + MOD;
    cout << x % MOD;
}