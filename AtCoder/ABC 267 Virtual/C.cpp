#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n], prefix[n+1]{};
    loop(i, 0, n, 1) cin >> arr[i];
    loop(i, 0, n, 1) prefix[i + 1] = prefix[i] + arr[i];
    ll sum{0};
    loop(i,0,m,1){
        sum += (i + 1) * arr[i];
    }
    ll mx_sum{sum};
    loop(i,1,n-m,1){
        sum += prefix[i];
    }
}