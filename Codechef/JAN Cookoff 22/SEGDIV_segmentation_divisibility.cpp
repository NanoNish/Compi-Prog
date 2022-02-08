#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i{0}; i < t; i++){
        int n;
        cin >> n;
        for (int j{1}; j <= n; j++){
            if (j%2 == 0)
                cout << j - 1 << " ";
            else
                cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}