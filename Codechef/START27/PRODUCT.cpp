#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int gcd(int m, int n){
    return (n == 0 ? m : gcd(n, m % n));
}

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int b, c;
        cin >> b >> c;
        int a = gcd(c, b);
        cout << c / a << endl;
    }
    return 0;
}