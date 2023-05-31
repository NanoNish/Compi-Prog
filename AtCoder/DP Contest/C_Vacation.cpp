#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    int dp[n][3]{};
    loop(i,0,n,1){
        int a,b,c;
        cin >> a >> b >> c;
        if(i == 0){
            dp[0][0] = a;
            dp[0][1] = b;
            dp[0][2] = c;
            continue;
        }
        else{
            dp[i][0] = a + max(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] = b + max(dp[i - 1][2], dp[i - 1][0]);
            dp[i][2] = c + max(dp[i - 1][0], dp[i - 1][1]);
        }
    }
    cout << max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
}