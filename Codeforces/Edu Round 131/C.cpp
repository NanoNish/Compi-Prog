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
        int n, m;
        cin >> n >> m;
        int arr[n]{};
        loop(i, 0, m, 1){
            int tmp;
            cin >> tmp;
            arr[tmp - 1]++;
        }
        sort(arr, arr + n);
        int l{arr[0]}, r{arr[n - 1]}, best{arr[n - 1]};
        while (l <= r){
            int mid = l + (r - l) / 2;
            int a{0}, b{0};
            loop(i, 0, n, 1){
                if (arr[i] < mid){
                    a += (mid - arr[i]) / 2;
                }
                else
                    b += arr[i] - mid;
            }
            if (a < b)
                l = mid + 1;
            else{
                best = mid;
                r = mid - 1;
            }
        }
        cout << best << "\n";
    }
}