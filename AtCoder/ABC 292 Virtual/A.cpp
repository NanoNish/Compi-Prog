#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    string s;
    cin >>s;
    loop(i,0,s.size(),1){
        s[i] = toupper(s[i]);
    }
    cout << s;
}