#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        ll sum = a + b + c;
        int mx = max(a, max(b, c));
        if(sum-3 >= m && mx - m <= sum + 1 - mx)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}