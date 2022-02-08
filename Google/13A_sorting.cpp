#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        int n{0}, temp{0};
        string s{""};
        vector<int> a(0), b(0);
        cin >> n;
        for (int j{0}; j < n; j++){
            cin >> temp;
            if(temp&1){
                a.push_back(temp);
                s += '1';
            }
            else{
                b.push_back(temp);
                s += '0';
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << "Case #" << i + 1 << ": ";
        for (int j{0}, a_ind{0}, b_ind{0}; j < n; j++){
            if(s[j] == '1')
                cout << a.at(a_ind++) << " ";
            else
                cout << b.at(b_ind++) << " ";
        }
        cout << endl;
    }
    return 0;
}