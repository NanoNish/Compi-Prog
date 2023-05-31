#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

long long compute_hash(string const& s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}


int main(){
    int t;
    cin >>t;
    while(t--){
        set<ll> uniq;
        int n;
        string s;
        cin >> n >> s;
        // string check{s.substr(2, n-2)};
        // uniq.insert(compute_hash(check));
        int count{n - 1};
        loop(i,0,n-3,1){
            if(s[i] == s[i+2] && s[i+1] == s[i+3])
                count--;
        }
        if(s[n-1] == s[n-3])
            count--;
        cout << count << "\n";
    }
}