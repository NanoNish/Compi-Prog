#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n, tmp;
        cin >> n;
        vector<int> vec(0);
        loop(i,0,n,1){
            cin >> tmp;
            vec.push_back(tmp);
        }
        vector<int> ans(n);
        for (int i{n}; i > 0; i--){
            int count{0};
            while(vec.at(vec.size()-1) != n){
                vec.push_back(vec.at(0));
                vec.erase(vec.begin());
                count++;
            }
            vec.pop_back();
            ans.at(n - 1) = count;
        }
        for(auto i: ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}

