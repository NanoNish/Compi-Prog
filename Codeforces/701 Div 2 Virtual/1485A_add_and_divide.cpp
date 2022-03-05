#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int a{0}, b{0};
        cin >> a >> b;
        int mn = max(a, b);
        if(a < b){
            cout << 1 << "\n";
            continue;
        }
        bool flag{0};
        if(b == 1){
            flag = 1;
            b++;
        }
        mn = floor(log(a) / log(b)) + 1;
        for (int i{b}; i - b < 31; i++){
            int count = floor(log(a) / log(i)) + 1 + i - b;
            mn = min(mn, count);
        }
        cout << mn + flag << "\n";
    }
    return 0;
}