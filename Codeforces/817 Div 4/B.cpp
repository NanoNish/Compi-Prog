#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        loop(i,0,n,1){
            if(s1[i] == 'B')
                s1[i] = 'G';
            if(s2[i] == 'B')
                s2[i] = 'G';
        }
        if(s1 == s2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}