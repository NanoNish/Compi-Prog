#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0};
        cin >> n;
        if(n>19){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        loop(i,0,n,1){
            cout << fixed << setprecision(0) << pow(3, i) << " ";
        }
        cout << endl;
    }
}