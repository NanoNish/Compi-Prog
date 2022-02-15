#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        ll n{0};
        cin >> n;
        if(n!=0)
            cout << 4 * n << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}