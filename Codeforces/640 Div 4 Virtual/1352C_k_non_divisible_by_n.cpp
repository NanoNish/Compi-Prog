#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        ll n, k, a ,b;
        cin >> n >> k;
        a = k / (n - 1);
        b = k % (n - 1);
        if(b == 0)
            b--;
        cout << n * a + b << "\n";
    }
}