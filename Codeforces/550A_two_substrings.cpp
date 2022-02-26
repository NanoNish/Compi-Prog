#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> AB(0), BA(0);
    loop(i, 1, s.length(), 1){
        if(s[i-1] == 'A' && s[i] == 'B')
            AB.push_back(i - 1); //A
        if(s[i-1] == 'B' && s[i] == 'A')
            BA.push_back(i - 1); //B
    }
    for(auto i : AB){
        for(auto j : BA){
            if(i != j+1 && i+1 != j){
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}