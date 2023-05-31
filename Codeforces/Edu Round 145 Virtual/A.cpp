#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        map<char, int> mp;
        cin >> s;
        loop(i, 0, 4, 1) mp[s[i]]++;
        if(mp.size() == 1)
            cout << -1 << "\n";
        if(mp.size() == 3 || mp.size() == 4)
            cout << 4 << "\n";
        if(mp.size() == 2){
            for(auto i: mp){
                if(i.second == 2)
                    cout << 4 << "\n";
                else
                    cout << 6 << "\n";
            }
        }
    }
}