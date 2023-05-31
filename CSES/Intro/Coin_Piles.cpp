#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if(b > 2*a || a > 2*b){
            cout << "NO\n";
            continue;
        }
        if(b>a)
            swap(a, b);
        a -= 2 * (a - b);
        b = a;
        if(b%3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}