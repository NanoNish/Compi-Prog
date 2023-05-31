#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll n{s.length()};
        s += s;
        ll count{0}, ans{0};
        loop(i,0,2*n,1){
            if(count >= n){
                ans = n;
                break;
            } 
            if(s[i] == '1') count++;
            else{
                ans = max(count, ans);
                count = 0;
            }
        }
        ans = max(count, ans);
        // cout << ans << " ";
        if(ans == n){
            cout << n*n << "\n"; 
            continue;
        }
        if(ans&1) cout << ((ans+1)/2)*((ans+1)/2) << "\n";
        else cout << ans/2 * (ans/2 + 1) << "\n";
    }
}