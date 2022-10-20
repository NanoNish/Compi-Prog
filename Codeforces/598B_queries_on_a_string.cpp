#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
 
int main(){
    string s;
    int t;
    cin >> s >> t;
    while(t--){
        string ans{""};
        int l, r, k;
        cin >> l >> r >> k;
        k = k % (r-l+1);
        l--;
        r--;
        rotate(s.begin() + l, s.begin() + r + 1 - k, s.begin() + r + 1);
    }
    cout << s;
}