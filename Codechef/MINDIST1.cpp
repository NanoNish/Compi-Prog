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
        string s;
        cin >> n >> s;
        int counto{}, counte{};
        loop(i,0,n,1)
            if(s[i] == '1'){
                if(i&1) counto++;
                else counte++;
            }
        if(counto && counte)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
    }
}