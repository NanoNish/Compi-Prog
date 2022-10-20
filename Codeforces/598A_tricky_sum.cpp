#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll binpow(ll a, ll b) {
    if (b == 0)
        return 1;
    ll res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, sum;
        cin >> n;
        sum = (n * (n + 1)) / 2;
        ll x{floor(log2(n))};
        sum -= 2 * (binpow(2, x+1) - 1);
        cout << sum << "\n";
    }
}