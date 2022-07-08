#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0]+s[1]+s[2] == s[3] + s[4] + s[5])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}