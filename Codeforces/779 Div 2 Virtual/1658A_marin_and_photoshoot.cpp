#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, count{0};
        cin >> n;
        string s;
        cin >> s;
        loop(i,0,n,1){
            if(s[i] == '0' && s[i+1] == '0' && i+1<n){
                count += 2;
                continue;
            }
            if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' && i+2<n)
                count++;
        }
        cout << count << "\n";
    }
}