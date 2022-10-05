#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        string s, t;
        cin >> n >> s;
        loop(i,0,n/2,1){
            if(1){
                if(s[i]=='0')
                    t = "0" + t;
                else
                    t = t + "1";
            }
            if(i == n - 1 - i)
                continue;
            if(1){
                if(s[n-1-i]=='0')
                    t = t + "0";
                else
                    t = "1" + t;
            }
        }
        if(n%2==1){
                if(s[n/2]=='0')
                    t = "0" + t;
                else
                    t = t + "1";
            }
        cout << t << "\n";
    }
}