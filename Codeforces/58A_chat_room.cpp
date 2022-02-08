#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int flag{0};
    size_t i{0};
    for(auto j : {'h','e','l','l','o'})    
        i = s.find(j, i) != string::npos ? s.find(j, i) + 1 : flag = s.length() + 1;
    if(flag == s.length() + 1 || i > s.length())
        cout << "NO";
    else
        cout << "YES";
}