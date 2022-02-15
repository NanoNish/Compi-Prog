#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{1}; i <= t; i++){
        cout << "Case #" << i << ":";
        int n{0}, temp{0};
        cin >> n;
        vector<int> vec(0);
        for (int j{0}; j < n; j++){
            cin >> temp;
            int count{0};
            vec.push_back(temp);
            sort(vec.begin(), vec.end());
            reverse(vec.begin(), vec.end());
            for (auto k{0}; k < vec.size(); k++){
                if (vec.at(k) >= k + 1){
                    count++;
                }
            }
            cout << " " << count;
        }
        cout << endl;
    }
}