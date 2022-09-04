#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll MOD = 1000000009;

int main(){
    int n;
    cin >> n;
    ll ans{0};
    loop(i,1,n-1,1){
        map<int, bool> m;
        loop(j,1,n-i,1){
            int tmp = __gcd(j, n - i - j);
            if(m.count(tmp)){
                ans += m[tmp];
            }
            else {
                ll tmp2 = i * tmp / __gcd(i, tmp);
                ans += tmp2;
                m[tmp] = tmp2;
            }
            if(j%10 == 0)
                ans %= MOD;
        }
        ans %= MOD;
    }
    cout << ans;
}