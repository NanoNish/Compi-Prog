#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll arr[n];
        map<ll, int> m;
        loop(i, 0, n, 1){
            cin >> arr[i];
            m[arr[i]]++;
        }
        ll x;
        cin >> x;
        int count{0};
        loop(i,0,n,1){
            ll y = arr[i] ^ x;
            while(y>0){    
                count += m[y];
                y >>= 1;
            }
        }
        cout << n * n - count << "\n";
    }
}