#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c[n]{};
        loop(i, 0, n, 1) cin >> c[i];
        sort(c, c + n);
        int sum{1};
        if(c[0] != 1){
            cout << "NO\n";
            continue;
        }
        bool flag{1};
        loop(i,1,n,1){
            if(c[i] > sum){
                flag = 0;
                break;
            }
            sum += c[i];
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
}