#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, temp;
    cin >> t;
    long long x{0}, y{0}, z{0};
    while(t--){
        cin >> temp;
        x += temp;
        cin >> temp;
        y += temp;
        cin >> temp;
        z += temp;
    }
    if (x == 0 && y == 0 && z == 0)
        cout << "YES";
    else
        cout << "NO";
}