#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    string s;
    cin >> s;
    loop(i,0,s.length(),1){
        if(s[i] == '0')
            s[i] = '1';
        else
            s[i] = '0';
    }
    cout << s;
}