#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec(0);
        loop(i,0,n,1){
            vec.push_back(i + 1);
        }
        cout << n << "\n";
        for(auto &i: vec)
            cout << i << " ";
        cout << "\n";
        loop(i,1,n,1){
            swap(vec.at(i), vec.at(i - 1));
            for (auto &i : vec)
                cout << i << " ";
            cout << "\n";
        }
    }
}