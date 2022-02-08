#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i{0}; i < t; i++){
        int n, a;
        cin >> n >> a;
        int m = n - a;
        if(a>=m)
            cout << m << endl;
        else
            cout << a << endl;
    }
    return 0;
}