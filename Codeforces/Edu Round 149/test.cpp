#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
 
 void solve() {
   
 }
int main(){
    FAST
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll x1{}, x2{};
        loop(i,0,n,1){
            if (s[i] == '(')
                x1++;
            else
                x2++;
        }
        if (x1 != x2){
            cout << -1 << "\n";
            continue;
        }
        ll arr[n]{};
        loop(i,0,n,1)
            arr[i] = 1;
        bool flag1{1}, flag2{1};
        ll cnt = 0;
        if(s[0] == '(')
            loop(i,0,n,1){
                if (s[i] == '(')
                    cnt++;
                else
                    cnt--;
                if (cnt < 0)
                    flag1 = 0;
            }
        else
            for(auto i{n-1}; i >= 0; i--){
                if (s[i] == '(')
                    cnt++;
                else
                    cnt--;
                if (cnt < 0)
                    flag2 = false;
            }
        if (flag1 && flag2){
            cout << 1 << "\n";
            for (auto value : a){
                cout << value << " ";
            }
            cout << "\n";
            continue;
        }
        cout << 2 << "\n";
        ll curr = 0;
        ll u = 0;
        loop(i,0,n,1){
            ll ok = curr;
            if (s[i] == '(')
                curr++;
            else
                curr--;
            if (curr >= 0 && u == 0)
                arr[i] = 2;
            else{
                if (s[i] == ')'){
                    curr++;
                    u++;
                }
                else{
                    u--;
                    curr--;
                }
            }
        }
        for (auto i : arr)
            cout << i << " ";
        cout << "\n";
    }
}