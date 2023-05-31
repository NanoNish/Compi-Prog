#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    ll n, count{0};
    cin >> n;
    while(n){
        count += n / 5;
        n /= 5;
    }
    cout << count;
}