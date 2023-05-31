#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        map<int, int> mp, moves;
        loop(i, 0, n, 1){
            int tmp;
            cin >> tmp;
            mp[tmp]++;
            mp[tmp ^ x]++;
            moves[tmp ^ x]++;
        }
        int mx_occur{};
        vector<pair<int, int>> mx;
        for(auto &i: mp){
            mx_occur = max(mx_occur, i.second);
        }
        for(auto &i: mp){
            if(i.second == mx_occur)
                mx.push_back({0, i.first});
        }
        for(auto &i: mx){
            i.first = moves[i.second];
        }
        sort(mx.begin(), mx.end());
        cout << mp[mx[0].second] << " " << mx[0].first << "\n";
    }
}