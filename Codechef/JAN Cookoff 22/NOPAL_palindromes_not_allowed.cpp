#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0}, n{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        cin >> n;
        string s{""};
        int m = (n / 3);
        int r = n % 3;
        for (int j{0}; j < m; j++)
            s += "abc";
        if(r==1)
            s += "a";
        if(r==2)
            s += "ab";
        cout << s << endl;
    }
    return 0;
}