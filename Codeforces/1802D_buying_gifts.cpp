#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n]{}, brr[n]{};
        loop(i, 0, n, 1) cin >> arr[i] >> brr[i];
        int mxa[n]{}, mxb[n]{};
        mxa[0] = arr[0];
        mxb[0] = brr[0];
        loop(i,1,n,1){
            mxa[i] = max(mxa[i - 1], arr[i]);
            mxb[i] = max(mxb[i - 1], brr[i]);
        }
        int dp[n + 1][3]{}; // 0 for ans, 1 for arr mx, 2 for brr mx
        if(abs(arr[0] - brr[1]) <= abs(arr[1] - brr[0])){
            dp[1][0] = abs(arr[0] - brr[1]);
            dp[1][1] = arr[0];
            dp[1][2] = brr[1];
        }
        else {
            dp[1][0] = abs(arr[1] - brr[0]);
            dp[1][1] = arr[1];
            dp[1][2] = brr[0];
        }
        loop(i,2,n,1){
            int ansa{INT_MAX}, ansb{INT_MAX};
            if(arr[i] > dp[i-1][1])
                ansa = abs(arr[i] - dp[i - 1][2]);
            if(brr[i] > dp[i-1][2])
                ansb = abs(brr[i] - dp[i - 1][1]);
            if(dp[i-1][0] <= ansa && dp[i-1][0] <= ansb){
                loop(j,0,3,1) dp[i][j] = dp[i - 1][j];
            }
            else if(ansa <= ansb){
                dp[i][0] = ansa;
                dp[i][1] = arr[i];
                dp[i][2] = dp[i - 1][2];
            }
            else {
                dp[i][0] = ansb;
                dp[i][1] = dp[i - 1][1];
                dp[i][2] = brr[i];
            }
            if(abs(arr[i] - mxb[i-1]) < dp[i][0]){
                dp[i][0] = abs(arr[i] - mxb[i - 1]);
                dp[i][1] = arr[i];
                dp[i][2] = mxb[i - 1];
            }
            if(abs(brr[i] - mxa[i-1]) < dp[i][0]){
                dp[i][0] = abs(brr[i] - mxa[i - 1]);
                dp[i][1] = mxa[i - 1];
                dp[i][2] = brr[i];
            }
        }
        cout << dp[n - 1][0] << "\n";
    }
}