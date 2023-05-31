#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    ll t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        map<ll, ll> m;
        loop(i,0,n,1){
            ll tmp;
            cin >> tmp;
            m[tmp]++;
        }
        ll count{0};
        for(auto &i: m){
            if(i.second > 0){
                if(m.count(x * i.first)){
                    ll sub = min(m[x * i.first], i.second);
                    m[x * i.first] -= sub;
                    i.second -= sub;
                    count += i.second;
                }
                else
                    count += i.second;
            }
        }
        cout << count << "\n";
    }
}