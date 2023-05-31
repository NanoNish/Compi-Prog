#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n]{};
    loop(i, 0, n, 1) cin >> arr[i];
    int l{0}, r{0};
    ll mx{LLONG_MIN};
    while(r < n){
        ll sum{arr[l]};
        while(sum >= 0 && r < n - 1){
            r++;
            sum += arr[r];
            mx = max(mx, sum);
        }
        l = ++r;
    }
    if(mx < 0){
        loop(i,0,n,1) mx = max(mx, (ll)arr[i]);
    }
    cout << mx;
}