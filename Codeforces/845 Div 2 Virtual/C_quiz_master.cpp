#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define N 100005
using namespace std;

vector<ll> factors[N]{};
 
void factorize(){
    loop(i,1,N,1)
        loop(j,i,N,i)
            factors[j].push_back(i);
}
        
int main(){
    FAST
    factorize();
    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll mp[m+1]{}, arr[n]{};
        loop(i, 0, n, 1) cin >> arr[i];
        sort(arr, arr + n);
        ll count{};
        ll r{0}, l{0}, ans{1000000007};
        bool flag{1};
        while (r < n && l <= r){
            for(auto &i: factors[arr[r]]){
                if(i > m)
                    break;
                if(mp[i] == 0)
                    count++;
                mp[i]++;
            }
            if(count != m){
                r++;
                continue;
            }
            ans = min(ans, arr[r] - arr[l]);
            while(l <= r && count == m){
                for(auto &i: factors[arr[l]]){
                    if(i > m)
                        break;
                    mp[i]--;
                    if(mp[i] == 0)
                        count--;
                }
                if(count == m){
                    ans = min(ans, arr[r] - arr[l+1]);
                }
                l++;
            }
            r++;
        }
        cout << (ans == 1000000007 ? -1 : ans) << "\n";
    }
}