#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n, x{0};
        cin >> n;
        int arr[n];
        loop(i,0,n,1) cin >> arr[i];
        loop(i,1,n,1) if(arr[i] < arr[i-1]){
            x = max(x, (arr[i] + arr[i-1] + 1) / 2);
        }
        loop(i,0,n,1) arr[i] = abs(arr[i] - x);
        bool flag{1};
        loop(i,1,n,1){
            if(arr[i] < arr[i-1]){
                flag = 0;
                break;
            }
        }
        if(flag) cout << x << "\n";
        else cout << -1 << "\n";
    }
}