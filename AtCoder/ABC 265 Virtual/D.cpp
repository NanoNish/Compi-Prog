#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll binsearch(ll arr[], ll p, ll l, ll r){
    ll best{r + 1};
    ll r_inp = r;
    while(l<=r){
        ll mid = l + (r - l) / 2;
        if(arr[mid] > p){
            r = mid - 1;
        }
        else{
            best = mid;
            l = mid + 1;
        }
    }
    if(best != r_inp+1 && arr[best] != p) return r_inp+1;
    else return best;
}

int main(){
    ll n, p, q, r;
    cin >> n >> p >> q >> r;
    ll arr[n];
    loop(i, 0, n, 1) cin >> arr[i];
    ll prefix[n+1]{};
    bool flag{0};
    loop(i, 0, n, 1) prefix[i+1] += arr[i] + prefix[i];
    loop(i,0,n+1,1){
        ll l = binsearch(prefix, prefix[i] + p, 0, n);
        l = binsearch(prefix, prefix[l] + q, l+1, n);
        l = binsearch(prefix, prefix[l] + r, l+1, n);
        if(l < n+1){
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << "Yes";
    else
        cout << "No";
}