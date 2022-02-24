#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << (a + b >= 11 ? 21 - a - b : -1) << "\n";
    }
    return 0;
}