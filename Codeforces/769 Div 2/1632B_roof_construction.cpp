#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        int n{0};
        cin >> n;
        if(n%2 == 0){
            for (int j{0}; j < n / 2; j++){
                cout << n - 1 - j << " " << j << " ";
            }
            cout << endl;
        }
        else{
            for (int j{0}; j < n / 2; j++){
                cout << n - 1 - j << " " << j << " ";
            }
            cout << n / 2 << endl;
        }
    }
}