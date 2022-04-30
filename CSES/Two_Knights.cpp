#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    ll k;
    cin >> k;
    for(ll i{1};i<k+1;i++){
        cout << ((i * i) * (i * i - 1) - 8 * (i - 1) * (i - 2)) / 2 << "\n";
    }
}