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
        int arr[n]{};
        loop(i, 0, n, 1) cin >> arr[i];
        int ans = 0;
        loop(i,0,n,1){
            if(arr[i] != i+1){
                if(ans == 0){
                    ans = abs(arr[i] - i - 1);
                }
                else{
                    ans = __gcd(ans, abs(arr[i] - i - 1));
                }
            }
        }
        cout << ans << '\n';
    }
}