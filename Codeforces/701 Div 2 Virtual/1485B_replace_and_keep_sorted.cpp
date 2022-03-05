#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n, q, k;
    cin >> n >> q >> k;
    int arr[n+2];
    loop(i, 1, n+1, 1) cin >> arr[i];
    arr[0] = 0;
    arr[n + 1] = k + 1;
    int diff[n];
    diff[0] = arr[2] - arr[0] - 2;
    loop(i, 1, n, 1){
        diff[i] = arr[i + 2] - arr[i] - 2 + diff[i-1];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        int sum{arr[l+1] - 2 + k - 1 - arr[r - 1]};
        sum += diff[r-2]-diff[l-1];
        cout << sum << "\n";
    }
    return 0;
}