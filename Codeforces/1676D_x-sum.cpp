#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll data[n][m];
        ll right[n + m - 1]{}, left[n + m - 1]{};
        loop(i,0,n,1){
            loop(j,0,m,1){
                cin >> data[i][j];
                left[i + j] += data[i][j];
                right[n - 1 - i + j] += data[i][j];
            }
        }
        ll mx{INT_MIN};
        loop(i,0,n,1){
            loop(j,0,m,1){
                mx = max(mx, left[i + j] + right[n - 1 - i + j] - data[i][j]);
            }
        }
        cout << mx << "\n";
    }
}