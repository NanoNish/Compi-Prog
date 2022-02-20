#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int wub{0}, first{0};
    string s;
    cin >> s;
    loop(i, 0, s.length(), 1){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B' && i < s.length() - 2){
            wub++;
            i += 2;
            if(wub == 1 && first){
                cout << " ";
            }
        }
        else{
            wub = 0;
            first = 1;
            cout << s[i];
        }
    }
    return 0;
}