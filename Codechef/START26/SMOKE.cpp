#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        int a = (n / 100) * x + ((n % 100) / 4) * y + ((n % 100) % 4 == 0 ? 0 : y);
        int b = (n / 4) * y + (n % 4 == 0 ? 0 : y);
        int c = (n / 100) * x + (n % 100 == 0 ? 0 : x);
        cout << min(min(a, b), c) << endl;
    }
    return 0;
}