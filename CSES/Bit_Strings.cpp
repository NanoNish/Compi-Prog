#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    ll ans{1};
    loop(i,0,n,1){
        ans *= 2;
        ans %= 1000000000 + 7;
    }
    cout << ans;
}