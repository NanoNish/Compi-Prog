#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    cout << a * x + b * y;
    return 0;
}