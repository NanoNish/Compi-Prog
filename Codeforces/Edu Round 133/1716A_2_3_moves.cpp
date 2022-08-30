#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n%3 == 0)
            cout << n / 3 << "\n";
        else if(n%3 == 2)
            cout << n / 3 + 1 << "\n";
        else{
            cout << n / 3 + 1 << "\n";
        }
    }
}