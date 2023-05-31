#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int ans{INT_MAX};
        loop(i,1,1000007,1){
            ans = min(i-1 + (a+i-1) / i + (b+i-1) / i, ans);
        }
        cout << ans << "\n";
    }
}