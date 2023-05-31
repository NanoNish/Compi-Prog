#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        int gcd{arr[0]};
        loop(i,0,n,1){
            gcd = __gcd(arr[i], gcd);
        }
        if(gcd == 1){
            cout << 0 << "\n";
            continue;
        }
        for(auto i{n - 1}; i >= 0; i--){
            if(__gcd(gcd, __gcd(arr[i], i+1)) == 1){
                cout << n - i << "\n";
                break;
            }
        }
    }
}