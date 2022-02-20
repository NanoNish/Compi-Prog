#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    n = min(n, m);
    if(n&1)
        cout << "Akshat";
    else
        cout << "Malvika";
    return 0;
}