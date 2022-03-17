#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        string swapped{s};
        sort(swapped.begin(), swapped.end());
        loop(i,0,n/2,1){
            if(s[i] > s[n-1-i]){
                char tmp{s[i]};
                s[i] = s[n - 1 - i];
                s[n - 1 - i] = tmp;
            }
        }
        if(s == swapped)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}