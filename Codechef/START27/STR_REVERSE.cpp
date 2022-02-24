#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        string s, rev;
        cin >> s;
        rev = s;
        reverse(rev.begin(), rev.end());
        int same{0};
        for (auto i{0}, j{0}; i < s.length(); i++){
            if(rev[j] == s[i]){
                same++;
                j++;
            }
        }
        cout << s.length() - same << "\n";
    }
    return 0;
}