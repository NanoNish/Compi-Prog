#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0};
        string s;
        cin >> n >> s;
        int count{1};
        //char temp{s[0]};
        loop(i, 1, n, 1){
            if(s[i] != s[i-1]){
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}