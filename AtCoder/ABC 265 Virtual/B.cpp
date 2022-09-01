#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    ll n,m,t;
    cin >> n >> m >> t;
    ll arr[n - 1];
    loop(i, 0, n - 1, 1) cin >> arr[i];
    ll brr[n]{};
    loop(i,0,m,1){
        ll x, y;
        cin >> x >> y;
        brr[x-1] += y;
    }
    bool flag{1};
    t += brr[0];
    loop(i,0,n-1,1){
        t -= arr[i];
        if(t<=0){
            flag = 0;
            break;
        }
        t += brr[i+1];
    }
    if(flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}