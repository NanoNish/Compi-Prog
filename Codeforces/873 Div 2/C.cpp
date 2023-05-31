#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n]{}, brr[n]{};
        vector<pair<int, int>> vec;
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i, 0, n, 1) cin >> brr[i];
        loop(i,0,n,1){
            vec.push_back({brr[i], 0});
        }
        sort(arr, arr + n);
        loop(i,0,n,1){
            auto it = upper_bound(arr, arr + n, brr[i]);
            int x = n - (it - arr - 1);
            vec[i].second = x;
        }
        sort(vec.begin(), vec.end());
        ll ans{1};
        loop(i,0,n,1){
            ans *= vec[i].second - i;
            ans %= MOD;
        }
        cout << ans << "\n";
    }
}