#include <bits/stdc++.h>
#define ll long long int
#define int long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        int arr[1001][1001]{};
        loop(i,0,n,1){
            int h, w;
            cin >> h >> w;
            arr[h][w]+= h*w;
        }
        loop(i, 1, 1001, 1) arr[i][1] += arr[i - 1][1];
        loop(i, 1, 1001, 1) arr[1][i] += arr[1][i - 1];
        loop(i,1,1001,1){
            loop(j,1,1001,1){
                arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
            }
        }
        loop(i,0,q,1){
            int h1, w1, h2, w2;
            cin >> h1 >> w1 >> h2 >> w2;
            cout << arr[h2 - 1][w2 - 1] - arr[h2 - 1][w1 - 1] - arr[h1 - 1][w2 - 1] + arr[h1 - 1][w1 - 1] << "\n";
        }
    }}