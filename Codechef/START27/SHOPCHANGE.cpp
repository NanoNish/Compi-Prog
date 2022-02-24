#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int temp;
        cin >> temp;
        cout << max(0, 100 - temp) << endl;
    }
    return 0;
}