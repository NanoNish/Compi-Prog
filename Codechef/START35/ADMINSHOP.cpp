#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        ll arr[n];
        loop(i,0,n,1)
            cin >> arr[i];
        sort(arr, arr + n);
        cout << max((arr[0] + x - 1) / arr[0], n) << "\n";
    }
}