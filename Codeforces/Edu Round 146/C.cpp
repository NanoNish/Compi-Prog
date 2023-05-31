#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int s1{a}, s2{b};
        vector<pair<int, int>> vec;
        loop(i,0,n,1){
            int tmp;
            cin >> tmp;
            vec.push_back({tmp, i + 1});
        }
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());
        vector<int> l1, l2;
        for(auto &i: vec){
            if(s1 <= s2){
                l1.push_back(i.second);
                s1 += a;
            }
            else{
                l2.push_back(i.second);
                s2 += b;
            }
        }
        cout << l1.size() << " ";
        for(auto &i: l1)
            cout << i << " ";
        cout << "\n";
        cout << l2.size() << " ";
        for (auto &i : l2)
            cout << i << " ";
        cout << "\n";
    }
}