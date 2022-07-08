#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[k]{};
        ll cost{0};
        loop(i, 0, n, 1){
            ll tmp;
            cin >> tmp;
            cost += tmp / k;
            arr[tmp % k]++;
        }
        int l{1}, r{k - 1};
        while(l<r){
            if(l + r < k){
                l++;
                continue;
            }
            while(arr[r] > 0){
                if (l == r){
                    cost += arr[l] / 2;
                    arr[l] -= arr[l];
                    l++;
                }
                else if(arr[l] <= arr[r]){
                    cost += arr[l];
                    arr[r] -= arr[l];
                    arr[l] -= arr[l];
                    l++;
                }
                else if(arr[l] > arr[r]){
                    cost += arr[r];
                    arr[r] -= arr[r];
                    arr[l] -= arr[r];
                }
            }
            r--;
        }
        cout << cost << "\n";
    }
}