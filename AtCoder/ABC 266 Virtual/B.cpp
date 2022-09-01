#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    ll n;
    cin >> n;
    ll x = n % (998244353);
    if(x>=0)
        cout << x;
    else
        cout << x + 998244353;
}