#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char f{s[0]}, l{s[s.length()-1]};
        int mx{0}, count{0};
        loop(i,0,s.length(),1){
            if(s[i] != f && s[i] != l){
                count++;
            }
            else{
                if(count > mx)
                    mx = count;
                count = 0;
            }
        }
        if(mx != 0)
            cout << mx << "\n";
        else
            cout << -1 << "\n";
    }
}