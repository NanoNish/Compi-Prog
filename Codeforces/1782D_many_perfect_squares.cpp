#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n]{};
        loop(i, 0, n, 1) cin >> arr[i];
        map<ll, int> mp;
        vector<ll> vec;
        loop(j,1,(ll)100000,1){
            ll sq = j * j;
            loop(i,0,n,1){
                if(sq >= arr[i]){
                    mp[sq - arr[i]]++;
                }
            }
        }
        int mx{};
        for(auto &i: mp)
            mx = max(mx, i.second);
        cout << mx << "\n";
    }
}