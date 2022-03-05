#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int d{0};
    cin >> d;
    if(d != 1){
        cout << d / 2 << " " << 0 << "\n";
        cout << 0 << " " << d / 2 << "\n";
        cout << d / 2 << " " << d << "\n";
        cout << d << " " << d / 2 << "\n";
    }
    else
        cout << -1;
}