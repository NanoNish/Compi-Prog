#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if(b <= a){
            cout << a - b << "\n";
            continue;
        }
        ll p = floor(log(b) / log(2));
        ll c = b - pow(2, p);
        cout << min(b - (a | c) + 1, (a | b) - b + 1) << "\n";
    }
    return 0;
}