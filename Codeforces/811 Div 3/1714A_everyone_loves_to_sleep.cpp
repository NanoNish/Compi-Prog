#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b, c, d{24*60};
        cin >> n >> a >> b;
        c = 60 * a + b;
        loop(i,0,n,1){
            int x, y, z;
            cin >> x >> y;
            z = 60 * x + y;
            if(z<c)
                z += 24 * 60;
            d = min(d, z - c);
        }
        cout << d / 60 << " " << d % 60 << "\n";
    }
}