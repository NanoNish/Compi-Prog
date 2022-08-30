#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    string s;
    cin >> s;
    char test{s[0]};
    ll count{1}, mx{1};
    loop(i,1,s.length(),1){
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            mx = max(mx, count);
            test = s[i];
            count = 1;
        }
    }
    mx = max(mx, count);
    cout << mx;
}