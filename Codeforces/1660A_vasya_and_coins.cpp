#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a==0)
            cout << 1 << "\n";
        else
            cout << a + 2 * b + 1 << "\n";
    }
}