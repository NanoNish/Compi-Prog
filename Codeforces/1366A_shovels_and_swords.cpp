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
        cout << min(a, min(b, (a + b) / 3)) << "\n";
    }
    return 0;
}