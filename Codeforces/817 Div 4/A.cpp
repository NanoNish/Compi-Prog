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
        string s;
        cin >> n >> s;
        if(n!=5){
            cout << "NO\n";
            continue;
        }
        map<char, int> m;
        loop(i, 0, 5, 1) m[s[i]]++;
        if (m['T'] == 1 && m['i'] == 1 && m['m'] == 1 && m['u'] == 1 && m['r'] == 1){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}