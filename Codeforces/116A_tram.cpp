#include <bits/stdc++.h>
#define ll long long int
#define loop(i, a, n, s) for (ll i{a}; i < n; i+=s)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    ll sum{0},max{0};
    loop(i,0,t,1){
        int a, b;
        cin >> b >> a;
        sum += a - b;
        max = sum > max ? sum : max;
    }
    cout << max;
}