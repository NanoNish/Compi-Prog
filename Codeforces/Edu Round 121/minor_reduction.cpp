#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        string s, ans{""};
        cin >> s;
        int n = s.length();
        for (int j{0}; j < n - 1; j++){
            int a = int(s[j]) + int(s[j + 1]) - 96;
            if (a > 9){
                for (int k{0}; k < n; k++){
                    if(k<j)
                        ans += s[k];
                    else if(k=j)
                        ans += to_string(a);
                    if(k>j+1)
                        ans += s[k];
                }
                cout << ans << endl;
                break;
            }
        }
        ans += to_string(int(s[0]) + int(s[1]) - 96);
        for (int j{2}; j < n; j++)
            ans += s[j];
        cout << ans << endl;
    }
}