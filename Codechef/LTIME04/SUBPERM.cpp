#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        int n, k;
        cin >> n >> k;
        if(n==1 && k==1){
            cout << 1 << endl;
            continue;
        }
        if(k==1 && n>1){
            cout << -1 << endl;
            continue;
        }
        for (int j{1}; j <= n;j++){
            if ((j == k || j == n) && n != k)
                cout << (j == k ? n : k) << " ";
            else
                cout << j << " ";
        }
        cout << endl;
    }
}