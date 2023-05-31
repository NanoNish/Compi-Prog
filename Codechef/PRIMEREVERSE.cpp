#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string a, b;
        cin >> n >> a >> b;
        int counta{}, countb{};
        loop(i,0,n,1){
            if(a[i] == '1') counta++;
            if(b[i] == '1') countb++;
        }
        if(counta != countb)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}