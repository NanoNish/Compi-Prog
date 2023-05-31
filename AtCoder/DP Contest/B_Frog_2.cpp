#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
  	FAST
    int n, k;
    cin >> n >> k;
    int arr[n]{}, dp[n]{};
    loop(i,0,n,1) cin >> arr[i];
    dp[1] = abs(arr[1] - arr[0]);
    loop(i,2,n,1){
        dp[i] = dp[i-1] + abs(arr[i] - arr[i-1]);
        loop(j,2,min(i+1,k+1),1){
            dp[i] = min(dp[i], dp[i-j] + abs(arr[i] - arr[i-j]));
        }
    }
    cout << dp[n-1];
}