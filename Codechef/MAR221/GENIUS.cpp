#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        if (x % 3 == 0 && x / 3 <= n)
            cout << "YES\n" << x/3 << " " << 0 << " " << n - x/3 << "\n";
        else if (x % 3 == 1 && (x + 2) / 3 <= n - 2)
            cout << "YES\n" << (x + 2) / 3 << " " << 2 << " " << n - 2 - (x + 2) / 3 << "\n";
        else if (x % 3 == 2 && (x + 1) / 3 <= n - 1)
            cout << "YES\n" << (x + 1) / 3 << " " << 1 << " " << n - 1 - (x + 1) / 3 << "\n";
        else
            cout << "NO\n";
    }
}