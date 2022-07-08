#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST int n, k;
    cin >> n >> k;
    int arr[n];
    loop(i, 0, n, 1) cin >> arr[i];
    while (k--){ 
        int tmp;
        cin >> tmp;
        int l{0}, r{n - 1}, best{-1};
        while (l <= r){
            int mid{l + (r - l) / 2};
            if (arr[mid] >= tmp){
                best = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        if (best == -1)
            cout << n + 1 << "\n";
        else
            cout << best + 1 << "\n";
    }
}