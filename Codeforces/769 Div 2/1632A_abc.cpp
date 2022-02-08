#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        int n{0};
        cin >> n;
        string s;
        cin >> s;
        if((n==2 && s[0] != s[1]) || n==1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}