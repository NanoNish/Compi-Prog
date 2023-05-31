#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    ll arr[n], diff[n-1], total{0};
    loop(i, 0, n, 1) cin >> arr[i];
    loop(i, 0, n - 1, 1){
        diff[i] = arr[i + 1] - arr[i];
        total += diff[i];
    }
    sort(diff, diff + n - 1);
    loop(i,0,k-1,1){
        total -= diff[n - 1 - i];
    }
    cout << total << "\n";
}