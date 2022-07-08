#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n], brr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i, 0, n, 1) cin >> brr[i];
        cout << brr[0] - arr[0] << " ";
        loop(i,1,n,1){
            if(arr[i] > brr[i-1]){
                cout << brr[i] - arr[i] << " ";
            }
            else
                cout << brr[i] - brr[i - 1] << " ";
        }
        cout << "\n";
    }
}