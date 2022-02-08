#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    ll n{0};
    cin >> n;
    cout << (n & 1 ? n / 2 - n : n / 2);
}