#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        ll n{0};
        cin >> n;
        ll arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        int i{n};
        while(i--){
            if(i+arr[i] < n)
                arr[i] += arr[i + arr[i]];
        }
        sort(arr, arr + n);
        cout << arr[n - 1] << "\n";
    }
    return 0;
}