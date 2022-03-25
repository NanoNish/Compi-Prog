#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        sort(arr, arr + n, greater<int>());
        ll sum{0};
        loop(i,0,k,1){
            sum += arr[i + k] / arr[i];
        }
        loop(i, 2 * k, n, 1) sum += arr[i];
        cout << sum << "\n";
    }
}