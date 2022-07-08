#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    ll a, b, n;
    cin >> a >> b >> n;
    ll l = 0, r=max(n*a,n*b), best = -1;
    while(l<=r){
        ll mid = l + (r - l) / 2;
        if((mid/a) * (mid/b) >= n){
            best = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << best << "\n";
} 