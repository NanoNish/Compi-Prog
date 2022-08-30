#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        int ind1{n}, ind2{n};
        loop(i,1,n,1){
            if(arr[i] < arr[i-1]){
                ind1 = i+1;
                break;
            }
        }
        loop(i,ind1,n,1){
            if(arr[i] < arr[i-1]){
                ind2 = i+1;
                break;
            }
        }
        if(ind2 != n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}