#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

char case_change(char c){
    if (c >= 65 && c <= 90)
        c = c + 32;
    else
        c = c - 32;
    return c;
}

int main(){
    string s;
    cin >> s;
    if(s.length() == 1){
        cout << case_change(s[0]);
        return 0;
    }
    bool flag{1};
    loop(i, 1, s.length(), 1){
        if (s[i] >= 97 && s[i] <= 122)
            flag = 0;
    }
    if(flag){
        loop(i, 0, s.length(), 1) cout << case_change(s[i]);
        return 0;
    }
    cout << s;
    return 0;
}