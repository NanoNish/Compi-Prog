#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    string str;
    cin >> t;
    for (int i{0}; i < t; i++){
        cin >> str;
        string ans{""};
        int ind[str.length()];
        for (int j{97}; j <= 122; j++){
            int count{0};
            for (int k{0}; k < str.length(); k++){
                if(str[k] == char(j))
                    count++;
            }
            if(count == 1)
                ans += char(j);
            else if(count == 2)
                ans = ans + char(j) + char(j);
        }
        cout << ans << endl;
    }
}