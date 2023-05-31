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
        string s;
        cin >> n >> s;
        bool arr[n]{};
        loop(i, 0, n, 1) arr[i] = s[i] - 48;
        vector<int> vec;
        loop(i,0,n,1){
            if(s[i]-48 == arr[i])
                vec.push_back(i + 1);
        }
        if(vec.size()){
            cout << 1 << "\n";
            cout << vec.size() << " ";
            for(auto &i: vec)
                cout << i << " ";
            cout << "\n";
        }
        else
            cout << 0 << "\n";
    }
}