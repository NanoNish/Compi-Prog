#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<ll> rows;
vector<ll> vec;

int main(){
    rows.push_back(0);
    loop(i,(ll)1,2024,1){
        rows.push_back(i*(i+1)/2);
    }
    ll tot{2023 * 1012 + 7};
    vec.resize(tot);
    loop(i,(ll)1,tot,1){
        vec[i] += (ll)i * i;
        ll row = lower_bound(rows.begin(), rows.end(), i) - vec.begin();
        assert(row < 2024);
        if (i + row + 1 < tot - 3){
            vec[i + row] += (ll)i * i;
            vec[i + row + 1] += (ll)i * i;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << vec.at(x) << "\n";
    }
}