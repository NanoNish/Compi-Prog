#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(s[0] == '0' || s[1] == '0' || s[n] == '0'){
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
        vector<int> vec(0);
        for(int i{n-1}; i > 1; i--){
            if(s[i] == '0')
                vec.push_back(i);
            else
                cout << i << " ";
        }
        cout << 1 << " ";
        for(auto i : vec)
            cout << i << " ";
        cout << 0 << "\n";
    }
    return 0;
}

/*

for s[n] (ie mex = n+1 always true) to be 1 is necessary
for s[0] = 1 is also necessary
for s[1] = 1 is also necessary
1 1 0 1 0   1
0 1 2 3 4   5

4 3 2 1 0
if mex = 2 imp -- 4 3 1 2 0
if 
*/