#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    string s;
    cin >> s;
    if((s[6] - 48)&1)
        cout << 1;
    else
        cout << 0;
}