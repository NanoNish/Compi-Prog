#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0}, temp{0}, count_1{0};
        cin >> n;
        loop(i, 0, 2 * n, 1){
            cin >> temp;
            if(temp & 1)
                count_1++;
        }
        if(count_1 & 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}