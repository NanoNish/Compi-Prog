#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, count{0};
        cin >> n;
        string s;
        cin >> s;
        loop(i,0,n,1){
            if(s[i] == '(' && s[2*n - 1 -i] == ')'){
                count++;
            }
        }
        cout << count << "\n";
    }
}