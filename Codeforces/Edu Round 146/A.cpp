#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        if(n&1 && !(k&1))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}