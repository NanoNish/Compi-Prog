#include <bits/stdc++.h>
using namespace std;

int main(){
    int n{0};
    cin >> n;
    for (int i{0}; i < n; i++){
        string s;
        cin >> s;
        char a = s[s.length() - 1];
        if (a == 'y' || a == 'Y')
            cout << "Case #" << i + 1 << ": " + s + " is ruled by nobody.";
        else if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
            cout << "Case #" << i + 1 << ": " + s + " is ruled by Alice.";
        else
            cout << "Case #" << i + 1 << ": " + s + " is ruled by Bob.";
        cout << endl;
    }
    return 0;
}