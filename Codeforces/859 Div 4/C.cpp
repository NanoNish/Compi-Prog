#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        set<char> s0, s1;
        bool flag{1};
        loop(i,0,n,1){
            if(i&1){
                s1.insert(s[i]);
            }
            else{
                s0.insert(s[i]);
            }
        }
        for(auto i: s0) if(s1.find(i) != s1.end())
                flag = 0;
        cout << (flag ? "YES\n" : "NO\n");
    }
}