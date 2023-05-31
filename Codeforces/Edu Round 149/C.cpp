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
        if(s[0] == '?')
            s[0] = '0';
        loop(i,1,s.length(),1){
            if(s[i] == '?')
                s[i] = s[i - 1];
        }
        cout << s << "\n";
    }
}