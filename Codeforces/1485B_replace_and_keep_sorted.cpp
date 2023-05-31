#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST 
    int n, q, k;
    cin >> n >> q >> k;
    int arr[n]{};
    loop(i, 0, n, 1) cin >> arr[i];
    int pref[n]{};
    loop(i, 1, n - 1, 1) pref[i] = arr[i + 1] - arr[i - 1] - 1;
    loop(i, 1, n, 1) pref[i] += pref[i - 1];
    loop(i,0,q,1){
        int l, r;
        cin >> l >> r;
        if(l == r){
            cout << k - 1 << "\n";
            continue;
        }
        cout << arr[l] + (k - arr[r - 2]) - (r - l + 2) + pref[r - 2] - pref[l - 1] << "\n";
    }
}