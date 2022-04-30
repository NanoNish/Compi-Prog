#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n], brr[n];
        vector<ll> a, b;
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i, 0, n, 1) cin >> brr[i];
        a.push_back(arr[0]);
        b.push_back(brr[0]);
        loop(i,1,n,1){
            if(abs(*(a.end()-1) - arr[i]) + abs(*(b.end()-1) - brr[i]) <= abs(*(a.end()-1) - brr[i]) + abs(*(b.end()-1) - arr[i])){
                a.push_back(arr[i]);
                b.push_back(brr[i]);
            }
            else{
                a.push_back(brr[i]);
                b.push_back(arr[i]);
            }
        }
        ll sum{0};
        loop(i,1,n,1){
            sum += abs(a.at(i - 1) - a.at(i)) + abs(b.at(i - 1) - b.at(i));
        }
        cout << sum << "\n";
    }
}