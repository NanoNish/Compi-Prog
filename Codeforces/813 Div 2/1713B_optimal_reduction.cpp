#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n], brr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i, 0, n, 1) brr[i] = arr[i];
        int ind{n};
        sort(brr, brr + n);
        loop(i,0,n,1){
            if(arr[i] != brr[i]){
                ind = i;
                break;
            }
        }
        reverse(brr + ind, brr + n);
        bool flag{1};
        loop(i,0,n,1){
            if(brr[i] != arr[i]){
                cout << "NO\n";
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
    }
}