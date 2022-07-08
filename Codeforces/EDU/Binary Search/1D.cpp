#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST 
    int n;
    cin >> n;
    ll arr[n];
    loop(i, 0, n, 1) cin >> arr[i];
    sort(arr, arr + n);
    int k;
    cin >> k;
    while(k--){
        int left, right;
        cin >> left >> right;
        int l{0}, r{n - 1}, best{-1};
        while(l<=r){
            int mid = l + (r - l) / 2;
            if(arr[mid]>=left){
                best = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        left = best;
        l = 0, r = n - 1, best = -1;
        while (l <= r){
            int mid = l + (r - l) / 2;
            if (arr[mid] <= right){
                best = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        right = best;
        if(left == -1 || right == -1 || right < left)
            cout << 0 << "\n";
        else
            cout << right - left + 1 << "\n";
    }
}