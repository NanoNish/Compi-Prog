#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n%3 == 0){
        loop(i, 0, n, 3){
            cout << s[i] << s[i + 1] << s[i + 2];
            if(i + 3 < n)
                cout << "-";
        }
    }
    if(n%3 == 1){
        loop(i, 0, n - 4, 3) cout << s[i] << s[i + 1] << s[i + 2] << "-";
        cout << s[n - 4] << s[n - 3] << "-" << s[n - 2] << s[n - 1];
    }
    if(n%3 == 2){
        loop(i, 0, n - 2, 3) cout << s[i] << s[i + 1] << s[i + 2] << "-";
        cout << s[n - 2] << s[n - 1];
    }
    return 0;
}