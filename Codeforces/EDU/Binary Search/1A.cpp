#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int n, k;
    cin >> n >> k;
    ll arr[n];
    loop(i, 0, n, 1) cin >> arr[i];
    loop(i, 0, k, 1){
        int tmp;
        cin >> tmp;
        int l{0}, r{n}, best{-1};
        while(l<=r){
            int mid = l + (r - l) / 2;
            if(arr[mid] == tmp){
                best = mid;
                break;
            }
            else if(arr[mid]>tmp)
                r = mid-1;
            else
                l = mid+1;
        }
        if(best != -1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}