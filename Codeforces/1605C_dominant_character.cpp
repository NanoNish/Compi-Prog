#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int num{0};
        loop(i,0,n-1,1){
            if(s[i+1] == 'a' && s[i] == 'a'){
                num = 2;
                break;
            }
        }
        if(num == 0) loop(i,0,n-2,1){
            if(s[i+2] == 'a' && s[i] == 'a'){
                num = 3;
                break;
            }
        }
        if(num == 0) loop(i,0,n-3,1){
            int counta{}, countb{}, countc{};
            loop(j,i,i+4,1){
                if (s[j] == 'a')
                    counta++;
                if (s[j] == 'b')
                    countb++;
                if (s[j] == 'c')
                    countc++;
            }
            if(counta > countb && counta > countc){
                num = 4;
                break;
            }
        }
        if(num == 0) loop(i,0,n-6,1){
            int counta{}, countb{}, countc{};
            loop(j,i,i+7,1){
                if (s[j] == 'a')
                    counta++;
                if (s[j] == 'b')
                    countb++;
                if (s[j] == 'c')
                    countc++;
            }
            if(counta > countb && counta > countc){
                num = 7;
                break;
            }
        }
        cout << (num == 0 ? -1 : num) << "\n";
    }
}