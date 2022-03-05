#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0};
        cin >> n;
        if(n&1){
            if((n-1)/2 & 1)
                cout << (n - 1) / 2 - 2 << " " << (n - 1) / 2 + 2 << " " << 1 << "\n";
            else
                cout << (n - 1) / 2 - 1 << " " << (n - 1) / 2 + 1 << " " << 1 << "\n";
        }
        else
            cout << n / 2 - 1 << " " << n / 2 << " " << 1 << "\n";
    }
    return 0;
}