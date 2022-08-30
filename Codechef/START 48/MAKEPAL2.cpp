#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count0{0}, count1{0};
        loop(i,0,n,1){
            if(s[i] == '0')
                count0++;
            else
                count1++;
        }
        if(count0 > count1){
            loop(i, 0, count0, 1) cout << 0;
            cout << "\n";
        }
        else{
            loop(i, 0, count1, 1) cout << 1;
            cout << "\n";
        }
    }
}