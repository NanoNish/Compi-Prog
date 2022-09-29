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
        int n, m;
        cin >> n >> m;
        if(m < n){
            cout << "No\n";
            continue;
        }
        if(n&1){
            cout << "Yes\n";
            loop(i, 0, n - 1, 1) cout << 1 << " ";
            cout << m - n + 1 << "\n";
        }
        else {
            if(m&1){
                cout << "No\n";
            }
            else{
                cout << "Yes\n";
                loop(i, 0, n - 2, 1) cout << 1 << " ";
                cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << "\n";
            }
        }
    }
}