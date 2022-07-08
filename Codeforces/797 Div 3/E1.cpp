#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
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
        ll costl{0}, costr{0};
        int l{1}, r{k - 1};
        while (l <= r){
            if (l + r < k){
                if(arr[l] > arr[r])
                    r--;
                else
                    l++;
                continue;
            }
            if (l == r){
                costl += arr[l] / 2;
                l++;
            }
            else if (arr[l] < arr[r]){
                costl += arr[l];
                arr[r] -= arr[l];
                arr[l] = 0;
                l++;
            }
            else if (arr[l] > arr[r]){
                costl += arr[r];
                arr[l] -= arr[r];
                arr[r] = 0;
                r--;
            }
            else if (arr[l] == arr[r]){
                costl += arr[r];
                arr[r] = arr[l] = 0;
                l++;
                r--;
            }
        }
        cout << cost + costl << "\n";
    }
}