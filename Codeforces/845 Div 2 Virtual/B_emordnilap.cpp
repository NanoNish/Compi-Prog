#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll count{(n*(n-1))%1000000007};
        loop(i,1,n+1,1){
            count = (count * i) % 1000000007;
        }
        cout << count << "\n";
    }
}