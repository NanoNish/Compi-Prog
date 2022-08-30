#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<ll> vec(2e5 + 1, 0);

void color(ll start, ll k, ll n){
    ll tmp = start + k;
    while(tmp <= n){
        vec.at(tmp) = (vec.at(tmp) + 1);
        color(tmp, k + 1, n);
        tmp += k;
    }
}

int main(){
    ll n, k;
    cin >> n >> k;
    color(0, k, n);
    loop(i,1,n+1,1){
        cout << vec.at(i) % 998244353 << " ";
    }
}