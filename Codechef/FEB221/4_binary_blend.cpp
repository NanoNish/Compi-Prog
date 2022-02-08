#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0};
        cin >> n;
        string s;
        int count_c1{0}, count_c2{0}, pivot_1{n}, pivot_2{n};
        bool flag_1{1}, flag_2{1};
        for (int j{0}; j < n; j++){
            int temp;
            cin >> temp;
            if (temp & 1){
                s += '1';
                if (j & 1){
                    count_c1++;
                    if(flag_1){
                        pivot_1 = j;
                        flag_1 = 0;
                    }
                }
                else{
                    count_c2++;
                    if(flag_2){
                        pivot_2 = j;
                        flag_2 = 0;
                    }
                }
            }
            else{
                s += '0';
                if (!(j & 1))
                    count_c1++;
                else
                    count_c2++;
            }
        }
        int count{0}, first_1{n};
        if(count_c1 >= count_c2){
            first_1 = pivot_1;
        }
        else{
            first_1 = pivot_2;
        }
        if(first_1 == n){
            cout << -1 << endl;
            continue;
        }
        vector<int> ind(0);
        for (int j{0}; j < n; j++){
            if (j == first_1)
                continue;
            if ((j - first_1) % 2 == 0 && s[j] == '0'){
                count++;
                ind.push_back(j);
            }
            if ((j - first_1) % 2 != 0 && s[j] == '1'){
                count++;
                ind.push_back(j);
            }
        }
        cout << count << endl;
        for (int j{0}; j < count; j++){
            cout << ind.at(j) + 1 << " " << first_1 + 1 << endl;
        }
    }
}