#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    ll n{0}, k{0};
    cin >> n >> k;
    cout << (k > (n + 1) / 2 ? 2 * (k - (n + 1) / 2) : 2 * k - 1);
}