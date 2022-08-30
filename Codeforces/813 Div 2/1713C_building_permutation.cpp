#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    set<ll> s;
    loop(i, 0, 1001, 1) s.insert(i * i);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n]{};
        n -= 1;
        while(n > 0){
            ll x = *(s.lower_bound(n));
            loop(i,x - n, n + 1, 1){
                arr[i] = x - i;
            }
            n = x - n - 1;
        }
        for (auto &i : arr)
            cout << i << " ";
        cout << "\n";
    }
}