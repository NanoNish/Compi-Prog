#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

//Need to mathematically prove the idea

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int inda{0}, indb{s.size()-1};
        bool flag{1};
        loop(i,0,s.size()/2,1){
            if(s[inda] == s[indb]){
                inda++;
                indb--;
                continue;
            }
            else if(s[inda] != s[inda + 1] || s[indb] != s[indb - 1]){
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "Draw\n";
        else
            cout << "Alice\n";
    }
}