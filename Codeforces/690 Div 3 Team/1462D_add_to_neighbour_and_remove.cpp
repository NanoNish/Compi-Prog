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
        ll arr[n]{}, presum[n]{};
        map<ll, int> m;
        cin >> arr[0];
        presum[0] = arr[0];
        m[presum[0]] = 1;
        loop(i, 1, n, 1){
            cin >> arr[i];
            presum[i] = presum[i - 1] + arr[i];
            m[presum[i]] = 1;
        }
        ll mx{presum[n - 1]};
        loop(i,1,mx+1,1){
            bool flag{1};
            if(mx%i != 0)
                continue;
            ll quo{mx / i};
            loop(j,1,quo+1,1){
                if(m[j*i] == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                cout << n - quo << "\n";
                break;
            }
        }
    }
}