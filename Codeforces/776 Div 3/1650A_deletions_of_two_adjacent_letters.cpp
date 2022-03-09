#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        string s;
        char c;
        cin >> s >> c;
        if(s.length()&1 == 0){
            cout << "NO\n";
            continue;
        }
        bool flag{1};
        loop(i,0,s.length(),2){
            if(s[i] == c){
                cout << "YES\n";
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "NO\n";
    }
    return 0;
}