#include <bits/stdc++.h>
using namespace std;

int main(){
    int n{};
    cin >> n;
    for (int i{n + 1}; ; i++){
        string s = to_string(i);
        if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3]){
            cout << i;
            return 0;
        }
    }
}