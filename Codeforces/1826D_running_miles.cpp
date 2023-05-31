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
        int arr[n]{}, brr[n]{}, crr[n]{};
        loop(i,0,n,1){
            cin >> arr[i];
            brr[i] = arr[i] + i;
            crr[i] = arr[i] - i;
        }
        loop(i, 1, n, 1) brr[i] = max(brr[i-1], brr[i]);
        for (auto i{n - 2}; i >= 0; i--) crr[i] = max(crr[i+1], crr[i]);
        int mx{0};
        loop(i,1,n-2,1){
            mx = max(mx, brr[i - 1] + arr[i] + crr[i + 1]);
        }
        cout << mx << "\n";
    }
}