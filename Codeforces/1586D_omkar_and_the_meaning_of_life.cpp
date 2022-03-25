#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n, x;
    cin >> n;
    loop(i,0,n,1){
        cout << "? ";
        loop(j, 0, n-1, 1){
            cout << 1 << " ";
        }
        cout << i + 2 << endl;
        cin >> x;
        if(x == 0){
            x = n - i;
            break;
        }
    }
    vector<pair<int, int>> vec;
    vec.push_back({n, x});
    loop(i, 0, n, 1){
        int tmp;
        cout << "? ";
        loop(j, 0, n - 1, 1){
            cout << x << " ";
        }
        cout << i + 1 << endl;
        cin >> tmp;
        if (tmp != 0){
            vec.push_back({tmp, i + 1});
        }
    }
    sort(vec.begin(), vec.end());
    cout << "! ";
    for(auto &i : vec){
        cout << i.second << " ";
    }
    cout << endl;
}