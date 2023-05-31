#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, n;
        cin >> n >> a >> b;
        if(a+b<n || (a == b && a == n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}