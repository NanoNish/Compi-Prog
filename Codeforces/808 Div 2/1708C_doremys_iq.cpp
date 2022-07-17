#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, q;
        cin >> n >> q;
        ll arr[n], dp[n+1]{};
        loop(i, 0, n, 1) cin >> arr[i];
        for (auto i{n - 1}; i >= 0; i--){
            dp[i] = dp[i + 1];
            if(arr[i] > dp[i+1])
                dp[i]++;
        }
        string s;
        loop(i,0,n,1){
            if(q >= arr[i])
                s += '1';
            else if(dp[i+1] < q){
                s += '1';
                q--;
            }
            else
                s += '0';
        }
        cout << s << "\n";
    }
}