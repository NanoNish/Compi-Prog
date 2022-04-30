#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if((n==1 && m>2)|| (n>2 && m==1)){
            cout << -1 << "\n";
            continue;
        }
        if((abs(n-m))&1)
            cout << (max(n, m)) * 2 - 3 << "\n";
        else
            cout << (max(n, m)) * 2 - 2 << "\n";
    }
}