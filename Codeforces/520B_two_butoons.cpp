#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int dp[20007]{};
    loop(i,0,n+1,1) dp[i] = n - i;
    while(n < 20007){
        int ctrl{n};
        if(2 * n < 20007){
            dp[2 * n] = dp[n] + 1;
            n = n << 1;
        }
        else n = 20004; 
        while(--n > ctrl){
            if(n&1) dp[n] = dp[n+1] + 1;
            else dp[n] = min(dp[n+1] + 1, dp[n/2] + 1);
        }
        n = n << 1;
    }
    cout << dp[m] << "\n";
}