#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        int n, k, x;
        cin >> n >> k >> x;
        if (k < x){
            cout << -1 << endl;
            continue;
        }
        int count{0};
        for (int j{0}; j < n; j++){
            cout << j % x << " ";
        }
        cout << endl;
    }
}