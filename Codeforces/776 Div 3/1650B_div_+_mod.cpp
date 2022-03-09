#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int l, r, a;
        cin >> l >> r >> a;
        if(a == 1){
            cout << r << "\n";
            continue;
        }
        if(l == r){
            cout << (r / a) + (r % a) << "\n";
            continue;
        }
        int tmp{0};
        if((r/a)*a - 1 >= l)
            tmp = r / a - 1 + a - 1;
        if(r%a == 0)
            cout << ((r - 1) / a) + ((r - 1) % a) << "\n";
        else
            cout << max((r / a) + (r % a), tmp) << "\n";
    }
    return 0;
}