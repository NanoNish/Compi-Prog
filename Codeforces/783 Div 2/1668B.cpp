#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        int arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        sort(arr, arr + n, greater<int>());
        ll sum{arr[0]};
        loop(i, 0, n - 1, 1) sum += arr[i];
        if(sum + n <= m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}