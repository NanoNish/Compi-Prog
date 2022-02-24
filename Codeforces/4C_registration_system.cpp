#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

struct id{
    int val{0};
    string name;
};

int main(){
    int n{0};
    cin >> n;
    vector<id> data(0);
    loop(i, 0, n, 1){
        string s;
        cin >> s;
        bool flag{1};
        loop(j, 0, data.size(), 1){
            if(s == data[j].name){
                cout << s + to_string(++data[j].val) << endl;
                flag = 0;
            }
        }
        if(flag){
            id new_id;
            new_id.name = s;
            data.push_back(new_id);
            cout << "OK" << endl;
        }
    }
    return 0;
}