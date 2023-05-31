#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x, y;
        cin >> y >> x;
        if(x>=y){
            if(x&1)
                cout << x * x - y + 1 << "\n";
            else
                cout << (x - 1) * (x - 1) + y << "\n";
        }
        else{
            if(y&1)
                cout << (y - 1) * (y - 1) + x << "\n";
            else
                cout << y * y - x + 1 << "\n";
        }
    }
}