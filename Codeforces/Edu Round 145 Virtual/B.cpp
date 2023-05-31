#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll l{0}, r{10000000000}, best{-1};
        while(l<=r){
            ll mid = l + (r - l) / 2;
            if(mid&1){
                if(n <= (mid+1)*(mid+1)){
                    r = mid - 1;
                    best = mid;
                }
                else
                    l = mid + 1;
            }
            else{
                if(n <= 1 + (mid/2)*(mid/2+1)){
                    r = mid - 1;
                    best = mid;
                }
                else
                    l = mid + 1;
            }
        }
        cout << best << "\n";
    }
}