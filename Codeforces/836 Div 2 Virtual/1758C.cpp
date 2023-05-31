#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        if(n % x != 0){
            cout << -1 << "\n";
            continue;
        }
        int arr[n]{};
        arr[0] = x;
        arr[x - 1] = n;
        arr[n - 1] = 1;
        loop(i,1,n-1,1){
            arr[i] = i + 1;
        }
        int prev{x};
        loop(i,x+1,n,1){
            if(i % prev == 0){
                arr[prev - 1] = i;
                arr[i - 1] = n;
                prev = i;
            }
        }
        loop(i, 0, n, 1) cout << arr[i] << " ";
        cout << "\n";
    }
}