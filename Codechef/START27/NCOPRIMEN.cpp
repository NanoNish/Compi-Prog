#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0};
        cin >> n;
        int arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i, 0, n-2, 3){
            arr[i] = arr[i + 2] = 2 * arr[i + 1];
        }
        if (n % 3 == 1)
            arr[n - 1] = 2;
        if (n % 3 == 2)
            arr[n - 2] = 2 * arr[n - 1];
        loop(i, 0, n, 1) cout << arr[i] << " ";
        cout << "\n";
    }
}