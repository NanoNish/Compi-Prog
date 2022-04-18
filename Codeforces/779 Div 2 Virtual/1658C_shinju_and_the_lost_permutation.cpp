#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        bool flag{1};
        loop(i, 0, n-1, 1){
            if((arr[i+1] != arr[i] + 1 ^ arr[i+1] != n)){
                cout << "NO\n";
                flag = 0;
            }
        }
        if(flag)
            cout << "YES\n";
    }
}