#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        int arr[n]{};
        loop(i,0,n,1){
            int tmp;
            cin >> tmp;
            arr[i] = tmp & 1;
        }
        int pref[n + 1]{};
        loop(i, 0, n, 1) pref[i + 1] = pref[i] + arr[i];
        loop(i,0,q,1){
            int l, r, k;
            cin >> l >> r >> k;
            if((k*(r-l+1))&1){
                if(pref[n]&1) cout << (((pref[r] - pref[l - 1]) & 1) ? "YES\n" : "NO\n");
                else cout << (((pref[r] - pref[l - 1]) & 1) ? "NO\n" : "YES\n");
            }
            else{
                if(!(pref[n]&1)) cout << (((pref[r] - pref[l - 1]) & 1) ? "YES\n" : "NO\n");
                else cout << (((pref[r] - pref[l - 1]) & 1) ? "NO\n" : "YES\n");
            }
        }
    }
}