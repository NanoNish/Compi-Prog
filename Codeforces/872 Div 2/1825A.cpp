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
        cin >> s;
        int n{-1};
        bool flag{0};
        loop(i,0,s.length(),1){
            if(s[i] != s[s.length()-1-i]){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout << s.length() << "\n";
            continue;
        }
        loop(i,0,s.length(),1){
            if(s[i] != s[s.length()-1]){
                n = s.length() - i;
                break;
            }
        }
        cout << n << "\n";
    }
}