#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[1] == 'o')
        cout << 5;
    else if(s[1] == 'u')
        cout << 4;
    else if(s[1] == 'e')
        cout << 3;
    else if(s[1] == 'h')
        cout << 2;
    else
        cout << 1;
}