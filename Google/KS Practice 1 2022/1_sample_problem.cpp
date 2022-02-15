#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int j{0}; j < t; j++){
        int n{0}, m{0}, temp{0};
        cin >> n >> m;
        long long sum{0};
        for (int i{0}; i < n; i++){
            cin >> temp;
            sum += temp;
        }
        cout << "Case #" << j + 1 << ": " << sum % m << "\n";
    }
}