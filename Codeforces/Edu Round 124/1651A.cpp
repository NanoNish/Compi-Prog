#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << fixed << setprecision(0) << pow(2, n) - 1 << endl;
    }
}