#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void func(int arr[], int n, int ind){
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll m;
        cin >> m;
        ll arr[m][2];
        loop(i, 0, m, 1) cin >> arr[i][0];
        loop(i, 0, m, 1) cin >> arr[i][1];
        ll moves{0},r{0},c{0};
        ll dp1[m]{}, dp2[m]{};
        dp1[m - 2] = arr[m - 1];
    }
}