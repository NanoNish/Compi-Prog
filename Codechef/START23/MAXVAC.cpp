#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i{0}; i < t; i++){
        int n, x, count_hol{0};
        bool present_1{0};
        cin >> n >> x;
        string s;
        cin >> s;
        for (int j{0}; j < s.length(); j++){
            if(s[j] == '1'){
                present_1 = 1;
                break;
            }
        }
        for (int j{0}; j <= s.length() - x; j++){
            bool flag{false};
            for (int k{j}; k < j + x; k++){
                if (s[k] == '1'){
                    flag == true;
                    break;
                }
            }
            if (flag == false){
                for (int k{j}; k < j + x; k++)
                    s[k] = '1';
                count_hol++;
                j += x;
            }
        }
        for (int j{0}; j <= s.length() - x + 1; j++){
            bool flag2{false};
            for (int k{j}; k < j + x - 1; k++){
                if (s[k] == '1'){
                    flag2 = true;
                    break;
                }
            }
            if (flag2 == false && present_1 == 1){
                count_hol++;
                break;
            }
        }
        cout << count_hol << endl;
    }
}