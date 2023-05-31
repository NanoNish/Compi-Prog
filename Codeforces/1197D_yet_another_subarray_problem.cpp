#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll dp[n][m+1]{};
    //dp stores sum of i to i + j - 1 terms = j terms
    loop(i,0,n,1){
        cin >> dp[i][1];
    }
    loop(i,0,n,1){
        loop(j,2,m+1,1){
            if(i+j-1 < n){
                dp[i][j] = dp[i][j - 1] + dp[i + j - 1][1];
            }
        }
    }
    vector<ll> a(n), b(n);
    loop(i,0,n,1){
        ll mx{0};
        loop(j,1,m,1){
            mx = max(mx, dp[i][j]);
        }
        b[i] = mx - k;
        a[i] = dp[i][m] - k;
    }
    
}