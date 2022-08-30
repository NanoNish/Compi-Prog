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
        string s;
        for (int i{9}; i > 0; i--){
            if(n>i){
                s += i + 48;
                n -= i;
            }
            else{
                s += n + 48;
                break;
            }
        }
        reverse(s.begin(), s.end());
        cout << s << "\n";
    }
}