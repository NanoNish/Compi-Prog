#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

// 00000000... 10 01 -->  abs(count_0 - count_1) == 0 or 1 --> YES
// 11111111... 00 11 -->  even 0 --> YES

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0}, count_0{0}, count_1{0};
        cin >> n;
        string s;
        cin >> s;
        loop(i,0,n,1){
            if(s[i] == '0')
                count_0++;
            else
                count_1++;
        }
        if((abs(count_0 - count_1) <= 1) || (count_0%2==0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}