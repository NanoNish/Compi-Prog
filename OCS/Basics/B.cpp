#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> vec(n);
        loop(i, 0, n, 1) cin >> vec[i];
        ll l{vec[0]}, r{1e12}, best{-1};
        while(l <= r){
            ll mid{l + (r - l) / 2};
            ll sum{mid};
            bool flag{1};
            loop(i,1,n,1){
                if((ld)(sum*k)/100 < vec[i]){
                    flag = 0;
                    break;
                }
                sum += vec[i];
            }
            if(flag){
                best = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << (best > vec[0] ? best - vec[0] : 0) << "\n";
    }
}