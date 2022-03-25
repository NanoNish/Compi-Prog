#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==3){
            string s;
            cin >> s;
            cout << 'a' << s << "\n";
            continue;
        }
        string s[n - 2];
        loop(i, 0, n - 2, 1) cin >> s[i];
        string ans;
        int flag{0};
        loop(i,0,n-3,1){
            if(s[i][1] != s[i+1][0]){
                ans += s[i][1];
                ans += s[i + 1][0];
                flag = i;
                break;
            }
        }
        if(!flag){
            ans += s[0][1];
            ans += s[1][0];
        }
        cout << s[0][0];
        loop(i,0,n-2,1){
            cout << s[i][1];
            if(i == flag)
                cout << ans[1];
        }
        cout << "\n";
    }
}