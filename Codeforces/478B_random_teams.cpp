#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    ll n, m;
    cin >> n >> m;
    ll mx, mn;
    mx = (n - m + 1) * (n - m) / 2;
    ll grp = n / m;
    ll xtra = n % m;
    mn = xtra * ((grp + 1) * grp / 2) + (m - xtra)*(grp * (grp - 1) / 2);
    cout << mn << " " << mx << "\n";
}
