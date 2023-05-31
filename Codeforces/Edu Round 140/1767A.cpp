#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        set<int> a, b;
        loop(i,0,3,1){
            int x, y;
            cin >> x >> y;
            a.insert(x);
            b.insert(y);
        }
        if(a.size() != 3 && b.size() != 3)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}