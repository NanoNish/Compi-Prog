#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a + b + c, max(a * b * c, max(a + b * c, max(a * b + c, max((a + b) * c, (a * (b + c)))))));
}