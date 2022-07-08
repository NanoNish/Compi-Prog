#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        if(n.length() == 1)
            cout << n << "\n";
        else if(n.length() == 2)
            cout << n[1] << "\n";
        else{
            int mn{10};
            loop(i,0,n.length(),1){
                mn = min(mn, int(n[i]) - 48);
            }
            cout << mn << "\n";
        }
    }
}