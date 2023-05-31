#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        if(b < a){
            cout << 1 << "\n";
            continue;
        }
        else
            cout << n / a + (n % a == 0 ? 0 : 1) << "\n";
    }
}