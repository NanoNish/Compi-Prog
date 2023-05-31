#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, w;
        cin >> n >> w;
        int arr[n]{};
        loop(i, 0, n, 1) cin >> arr[i];
        sort(arr, arr + n, greater<int>());
        int vis[n]{};
        int count{0};
        int l{0};
        while(l < n){
            if(vis[l] == 1){
                l++;
                continue;
            }
            count++;
            int filled{arr[l]};
            vis[l] = 1;
            loop(i,l+1,n,1){
                if(vis[i] == 1 || filled + arr[i] > w) continue;
                vis[i] = 1;
                filled += arr[i];
            }
        }
        cout << count << "\n";
    }
}