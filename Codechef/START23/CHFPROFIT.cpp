#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        long x, y, z;
        cin >> x >> y >> z;
        cout << x * (z - y) << endl;
    }
}