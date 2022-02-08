#include <bits/stdc++.h>
#define ll long long int
#define loop(i, a, n, s) for (ll i{a}; i < n; i += s)
using namespace std;

int main(){
    ll n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    loop(i,0,t,1){
        loop(j,0,n-1,1){
            size_t ind = s.find("BG", j);
            if((ind == string::npos) || (ind == s.length()-1))
                break;
            s[ind] = 'G';
            s[ind + 1] = 'B';
            j = ind+1;
        }
    }
    cout << s;
}