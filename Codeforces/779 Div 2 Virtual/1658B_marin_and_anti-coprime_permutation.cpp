#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;
const ll MOD = 998244353;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n & 1)
            cout << 0 << "\n";
        else{
            ll fact{1};
            loop(i, 0, n / 2, 1){
                fact *= i + 1;
                fact %= MOD;
            }
            cout << (fact * fact) % MOD << "\n";
        }
    }
}