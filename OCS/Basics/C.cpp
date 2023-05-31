#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

pair<bool, string> check(string &a, string &b, int &n){
    string ans;
    int l{}, r{};
    while(l < 2*n && r < 2*n){
        if(a[l] == b[r]){
            ans += a[l];
            l++;
            r++;
            continue;
        }
        if(l <= r){
            ans += a[l];
            l++;
        }
        else{
            ans += b[r];
            r++;
        }
    }
    loop(i, l, 2*n, 1) ans += a[i];
    loop(i, r, 2*n, 1) ans += b[i];
    // while(ans.length() < 3*n)
    //     ans += '0';
    if(ans.length() <= 3*n){
        return {1, ans};
    }
    return {0, ""};
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b, c, ans;
        cin >> a >> b >> c;
        pair<bool, string> p;
        p = check(a, b, n);
        if(p.first == 1){
            cout << p.second << "\n";
            continue;
        }
        p = check(b, c, n);
        if(p.first == 1){
            cout << p.second << "\n";
            continue;
        }
        p = check(c, a, n);
        if(p.first == 1){
            cout << p.second << "\n";
            continue;
        }
    }
}