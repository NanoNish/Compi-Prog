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
        string str;
        set<string> s;
        cin >> n >> str;
        if(n<=3){
            cout << "NO\n";
            continue;
        }
        bool flag{1};
        string tmp;
        s.insert(tmp + str[0] + str[1]);
        tmp = "";
        loop(i,2,n-1,1){
            string ans;
            ans = ans + str[i] + str[i + 1];
            if(s.find(ans) != s.end()){
                cout << "YES\n";
                flag = 0;
                break;
            }
            tmp = tmp + str[i - 1] + str[i];
            s.insert(tmp);
            tmp = "";
        }
        if(flag)
            cout << "NO\n";
    }
}