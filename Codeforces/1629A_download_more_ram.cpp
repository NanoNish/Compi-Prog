#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i{0}; i < t; i++){
        int n, ram;
        cin >> n >> ram;
        int a[n], b[n];
        for (int j{0}; j < n; j++)
            cin >> a[j];
        for (int j{0}; j < n; j++)
            cin >> b[j];
        for (int j{0}; j < n; j++){
            for (int k{0}; k < n; k++){
                if(ram >= a[k]){
                    ram += b[k];
                    a[k] = b[k] = 0;
                }
            }
        }
        cout << ram << endl;
    }
}