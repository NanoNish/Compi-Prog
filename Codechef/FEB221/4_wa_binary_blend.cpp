#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        int n;
        cin >> n;
        string s;
        int count_1{0}, first_1{n}, count{0};
        for (int j{0}; j < n; j++){
            int temp;
            cin >> temp;
            if(temp & 1){
                s += '1';
                count_1++;
            }
            else
                s += '0';
            if(count_1 == 1)
                first_1 = j;
        }
        vector<int> ind(0);
        if(first_1 == n){
            cout << -1 << endl;
            continue;
        }
        for (int j{0}; j < n; j++){
            if(j==first_1)
                continue;
            if ((j - first_1) % 2 == 0 && s[j] == '0'){
                count++;
                ind.push_back(j);
            }
            if ((j - first_1) % 2 == 1 && s[j] == '1'){
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