#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, us{""}, ls{""};
    cin >> s;
    int ucount{0}, lcount{0};
    for (int i{0}; i < s.length(); i++){
        if(int(s[i]) >= 65 && int(s[i]) <= 90){
            us += s[i];
            ls += char(int(s[i]) + 32);
            ucount++;    
        }
        if(int(s[i]) >= 97 && int(s[i]) <= 122){
            ls += s[i];
            us += char(int(s[i]) - 32);
            lcount++;    
        }   
    }
    if (lcount >= ucount)
        cout << ls;
    else
        cout << us;
    return 0;
}