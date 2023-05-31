#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    map<int, int> m;
    loop(i,1,10,1){
        m[1 * i] = 1;
        m[10 * i] = 1;
        m[100 * i] = 1;
        m[1000 * i] = 1;
        m[10000 * i] = 1;
        m[100000 * i] = 1;
        m[1000000 * i] = 1;
    }
    int arr[1000002]{};
    loop(i,1,1000002,1){
        if(m[i] == 1)
            arr[i] = 1 + arr[i-1];
        else arr[i] = arr[i-1];
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << arr[n] << "\n";
    }
}