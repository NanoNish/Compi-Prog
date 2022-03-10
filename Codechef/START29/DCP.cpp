#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    ll arr[n+1]{};
    loop(i, 1, n + 1, 1) cin >> arr[i];
    while(m--){
        int dcp, x;
        cin >> dcp >> x;
        while(x--){
            int w, c;
            cin >> w >> c;
            arr[c] += w * arr[dcp];
            arr[c] = arr[c] % 1000000007;
        }
        arr[dcp] = 0;
    }
    loop(i, 1, n + 1, 1){
        cout << arr[i] % 1000000007 << "\n";
    }
}