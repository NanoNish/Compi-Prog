#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n]{}, dp[n]{};
    loop(i,0,n,1) cin >> arr[i];
    dp[1] = abs(arr[1] - arr[0]);
    loop(i,2,n,1) dp[i] = min(dp[i-1] + abs(arr[i] - arr[i-1]), dp[i-2] + abs(arr[i] - arr[i-2]));
    cout << dp[n-1];
}