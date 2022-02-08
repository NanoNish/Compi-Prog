#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for (size_t i{0}; i < s.length(); i++){
        if(isupper(s[i]))
            s[i] = tolower(s[i]);
        if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'))
            cout << "." << s[i];
    }
}