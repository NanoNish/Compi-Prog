#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        if(m > n) swap(n, m);
        ll arr[n * m]{};
        loop(i, 0, n * m, 1) cin >> arr[i];
        sort(arr, arr + m * n);
        ll ans1{}, ans2{};
        ans1 = 0 + (m - 1) * (arr[n * m - 1] - arr[1]) + (n * m - m) * (arr[n * m - 1] - arr[0]);
        ans2 = 0 + (m - 1) * (arr[n * m - 2] - arr[0]) + (n * m - m) * (arr[n * m - 1] - arr[0]);
        cout << max(ans2, ans1) << "\n";
    }
}