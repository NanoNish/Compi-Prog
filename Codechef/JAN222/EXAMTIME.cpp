#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0}, a1{0}, a2{0}, a3{0}, b1{0}, b2{0}, b3{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        if(a1+a2+a3>b1+b2+b3)
            cout << "Dragon" << endl;
        if(a1+a2+a3<b1+b2+b3)
            cout << "Sloth" << endl;
        if(a1+a2+a3==b1+b2+b3){
            if(a1>b1)
                cout << "Dragon" << endl;
            else if(a1<b1)
                cout << "Sloth" << endl;
            else if(a2>b2)
                cout << "Dragon" << endl;
            else if(a2<b2)
                cout << "Sloth" << endl;
            else
                cout << "Tie" << endl;
        }
    }
}