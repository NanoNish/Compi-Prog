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
        int x, arr[n - 1]{};
        cin >> x;
        loop(i, 0, n - 1, 1) cin >> arr[i];
        sort(arr, arr + n - 1);
        loop(i,0,n-1,1){
            if(arr[i]>x){
                x += (arr[i] - x + 1) / 2;
            }
        }
        cout << x << "\n";
    }
}