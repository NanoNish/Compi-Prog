#include <iostream>
#include <string>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        string a, s, rev_b{""};
        cin >> a >> s;
        bool flag{1};
        int s_ind = s.length() - 1;
        for (int j{a.length()-1}; s_ind >= 0; j--){
            if(j < 0){
                rev_b += s[s_ind];
                s_ind--;
                continue;
            }
            if(j > s_ind){
                cout << -1 << endl;
                flag = 0;
                break;
            }
            if(a[j] <= s[s_ind]){
                rev_b += to_string(int(s[s_ind]) - int(a[j]));
                s_ind--;
                continue;
            }
            else if(s_ind >= 0 && s[s_ind-1] == '1'){
                rev_b += to_string(int(s[s_ind]) - int(a[j]) + 10);
                s_ind -= 2;
                continue;
            }
            else{
                cout << -1 << endl;
                flag = 0;
                break;
            }
        }
        if(flag){
            for (int j{0}; j*2 < rev_b.length(); j++){
                char temp = rev_b[rev_b.length() - 1 - j];
                rev_b[rev_b.length() - 1 - j] = rev_b[j];
                rev_b[j] = temp;
            }
            cout << stoll(rev_b) << endl;
        }
    }
}