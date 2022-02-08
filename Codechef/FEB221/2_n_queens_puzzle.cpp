#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        double n{0};
        cin >> n;
        n = pow(0.143 * n, n);
        cout << (n - floor(n) > 0.5 ? ceil(n) : floor(n)) << endl;
    }
}