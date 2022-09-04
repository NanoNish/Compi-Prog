#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll MOD = 1000000007;

int main(){
    ll n,k;
    cin >> n >> k;
    ll ans{1}, diff{1};
    bool flag{0};
    if(k > n) {
        flag = 1;
    }
    loop(i,0,n,1){
        ans *= 2;
        ans %= MOD;
    }
    if(flag){
        cout << ans << "\n";
        return 0;
    }
    loop(i,0,n-k,1){
        diff *= 2;
        diff %= MOD;
    }
    ans = (ans + 1 - diff);
    if(ans <= 0)
        ans = ans % MOD + MOD;
    else
        ans = ans % MOD;
    cout << ans << "\n";
}