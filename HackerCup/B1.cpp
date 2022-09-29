#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
using namespace std;

int main(){
    // sum((x-a)^2+(y-b)^2)
    // sum(x^2)+sum(y^2)+n(a^2+b^2)-2asum(x)-2bsum(y)
    ifstream inp("input.txt");
    ofstream out("output.txt");
    int t;
    inp >> t;
    loop(test,1,t+1,1){
        ll n;
        inp >> n;
        ll suma{0}, sumb{0}, sqa{0}, sqb{0};
        ll a[n], b[n];
        loop(i,0,n,1){
            inp >> a[i] >> b[i];
            suma = (suma + a[i]);
            sumb = (sumb + b[i]);
            sqa = (sqa + a[i] * a[i]);
            sqb = (sqb + b[i] * b[i]);
        }
        ll ans{0};
        int q;
        inp >> q;
        loop(i,0,q,1){
            int x, y;
            inp >> x >> y;
            ans = (abs(ans + sqa + sqb + n * (x * x + y * y) - 2 * (x * suma + y * sumb))) % MOD;
        }
        out << "Case #" << test << ": " << ans << "\n";
    }
}