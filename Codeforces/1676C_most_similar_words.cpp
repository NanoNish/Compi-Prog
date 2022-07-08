#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        ll mn{INT_MAX};
        loop(i,0,n,1){
            loop(j,i+1,n,1){
                ll count{0};
                loop(k,0,m,1){
                    count += abs(arr[i][k] - arr[j][k]);
                }
                mn = min(mn, count);
            }
        }
        cout << mn << "\n";
    }
}