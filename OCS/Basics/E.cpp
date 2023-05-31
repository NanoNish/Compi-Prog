#include <bits/stdc++.h>
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, uu, rr, dd, ll;
        cin >> n >> uu >> rr >> dd >> ll;
        bool flag{1};
        loop(i,0,16,1){
            int u{uu}, r{rr}, d{dd}, l{ll};
            int t{i};
            bool ul, ur, dl, dr;
            ul = t & 1;
            t = t >> 1;
            ur = t & 1;
            t = t >> 1;
            dl = t & 1;
            t = t >> 1;
            dr = t & 1;
            if(ul){
                u--;
                l--;
            }
            if(ur){
                u--;
                r--;
            }
            if(dl){
                d--;
                l--;
            }
            if(dr){
                d--;
                r--;
            }
            if(u < 0 || l < 0 || d < 0 || r < 0){
                continue;
            }
            else{
                flag = 0;
                break;
            }
        }
        cout << (flag ? "NO\n" : "YES\n");
    }
}