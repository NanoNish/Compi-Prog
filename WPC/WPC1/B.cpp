#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    bool marked[n][n]{};
    ll arr[n];
    loop(i, 0, n, 1) cin >> arr[i];
    sort(arr, arr + n);
    map<ll, int> m;
    loop(i, 0, n, 1) m[arr[i]] = i+1;
    int max_length{1};
    loop(i,0,n,1){
        loop(j,i+1,n,1){
            if(marked[i][j]) continue;
            int ap_length{1};
            ll d = arr[j] - arr[i];
            ll next_element{arr[j]};
            while(m[next_element]){
                ap_length++;
                marked[m[next_element - d] - 1][m[next_element] - 1] = 1;
                next_element += d;
            }
            max_length = max(max_length, ap_length);
        }
    }
    cout << max_length;
}