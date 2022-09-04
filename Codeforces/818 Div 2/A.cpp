#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        ll ans{0};
        ans += n;
        ans += n / 2 * 2;
        ans += n / 3 * 2;
        ans -= n / 6 * 2;
        cout << ans << "\n";
    }
}