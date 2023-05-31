#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    string s;
    cin >> s;
    ll a, b;
    cin >> a >> b;
    ll n{s.size()};
    int arr[n]{}, brr[n]{};
    int rem{};
    loop(i,0,n,1){
        rem = (10 * rem + s[i] - 48) % a;
        arr[i] = (rem == 0);
    }
    rem = 0;
    ll x{1 % b};
    for (auto i{n - 1}; i >= 0; i--){
        rem = (x * (s[i] - 48) + rem) % b;
        x = (10 * x) % b;
        brr[i] = (rem == 0);
    }
    loop(i,0,n-1,1){
        if(s[i+1] == '0') continue;
        if(arr[i] == 1 && brr[i+1] == 1){
            cout << "YES\n";
            loop(j, 0, i + 1, 1) cout << s[j];
            cout << "\n";
            loop(j, i + 1, n, 1) cout << s[j];
            cout << "\n";
            return 0;
        }
    }
    cout << "NO\n";
}