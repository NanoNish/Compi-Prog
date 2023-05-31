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
        int arr[n]{};
        loop(i, 0, n, 1) cin >> arr[i];
        ll pref[n]{};
        loop(i, 1, n+1, 1) pref[i] = pref[i - 1] + arr[i - 1];
        int l{0}, r{n - 1}, best{-1};
        while(l<=r){
            int mid = l + (r - l) / 2;
            cout << "? " << mid + 1 - l << " ";
            loop(i,l,mid+1,1){
                cout << i + 1 << " ";
            }
            cout << endl;
            ll ans{};
            cin >> ans;
            if(ans == pref[mid + 1] + 1 - pref[l]){
                best = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        cout << "! " << best + 1 << endl;
    }
}