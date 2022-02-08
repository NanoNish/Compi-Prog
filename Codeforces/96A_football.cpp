#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s.length()>6){
        for(int i{0}; i<(s.length()-6); i++){
            int sum = s[i] + s[i+1] + s[i+2] + s[i+3] + s[i+4] + s[i+5] + s[i+6] - 48*7;
            if(sum == 0 || sum == 7){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}