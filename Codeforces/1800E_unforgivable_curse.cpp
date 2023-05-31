#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        string s, t;
        map<int, int> mp;
        vector<ll> vec;
        cin >> n >> k >> s >> t;
        loop(i,(ll)0,min(n,k),1) {
            if(i + k >= n)
                vec.push_back(i);
        }
        loop(i,0,n,1){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        bool flag{1};
        for(auto i: mp) if(i.second != 0){
            flag = 0;
            break;
        }
        for(auto i: vec) if(s[i] != t[i]){
            flag = 0;
            break;
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}

