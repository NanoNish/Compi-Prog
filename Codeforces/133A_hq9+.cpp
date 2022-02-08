#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    string s;
    cin >> s;
    bool flag{1};
    for (size_t i{0}; i < s.length(); i++)
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            cout << "YES" << endl;
            flag = 0;
            break;
        }
    if(flag)
        cout << "NO" << endl;
}