#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string w;
        ll p, count{0};
        cin >> w >> p;
        set<pair<char, int>> s;
        loop(i,0,w.size(),1){
            s.insert({w[i], i});
            count += int(w[i]) - 96;
        }
        while(count > p){
            count -= (*s.rbegin()).first - 96;
            s.erase(*s.rbegin());
        }
        set<pair<int, char>> ans;
        auto it{s.begin()};
        while(it != s.end()){
            ans.insert({(*it).second, (*it).first});
            it++;
        }
        for(auto i: ans){
            cout << i.second;
        }
        cout << "\n";
    }
}