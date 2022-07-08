#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll check(ll x, ll a){
    ll y = x * a;
    bool flag{0};
    string z = to_string(y);
    loop(i,0,z.length(),1){
        ll w = (z[i] - 48) * y;
        if(w > 100*x)
            return 2;
        if(w > 10*x)
            flag = 1;
    }
    return (ll)flag;
}

ll main(){
    ll n, x;
    cin >> n >> x;
    vector<ll> vec;
    
}

