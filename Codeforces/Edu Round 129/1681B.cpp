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
        int n;
        cin >> n;
        int arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        int m;
        cin >> m;
        int b{0};
        loop(i,0,m,1){
            int tmp;
            cin >> tmp;
            b += tmp;
            b = b % n;
        }
        cout << arr[b] << "\n";
    }
}