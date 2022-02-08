#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        int x{0}, y{0}, z{0};
        cin >> x >> y >> z;
        if(x>=y)
            cout << "PIZZA" << endl;
        else if(x>=z)
            cout << "BURGER" << endl;
        else
            cout << "NOTHING" << endl;
    }
    return 0;
}