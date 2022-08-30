#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        if(n&1 && m&1)
            cout << n + m - 1 << "\n";
        else if(n&1)
            cout << m << "\n";
        else if(m&1)
            cout << n << "\n";
        else
            cout << 0 << "\n";
    }
}