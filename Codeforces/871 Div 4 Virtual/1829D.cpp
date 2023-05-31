#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int x{0}, y{0};
        while(!(m & 1)){
            m /= 2;
            y++;
        }
        while(m < n){
            m *= 3;
            x++;
        }
        if(m != n || x < y)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}