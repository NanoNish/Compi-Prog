#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    while(true){
        int n;
        cin >> n;
        if(n == 0)
            break;
        map<int, pair<int, int>> mp;
        while(n--){
            int a, b;
            cin >> a >> b;
            if(mp.count(a)){
                auto x = mp[a];
                if(x.first > b)
                    mp[a] = {b, x.first};
                else
                    mp[a] = {x.first, b};
            }
            else
                mp[a] = {b, -1};
        }
        for(auto &i: mp){
            if(i.second.second == -1)
                mp.erase(i.first);
        }
        map<pair<int, int>, ll> count;
        for(auto &i: mp)
            count[i.second]++;
        ll ans{};
        for(auto &i: count)
            ans += i.second * (i.second - 1) / 2;
        cout << ans << "\n";
    }    
}