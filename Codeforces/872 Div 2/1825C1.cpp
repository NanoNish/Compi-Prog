#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> n >> m;
        int a{}, b{};
        set<int> s;
        vector<int> vec;
        loop(i,0,n,1){
            int tmp;
            cin >> tmp;
            if(tmp == -1)
                a++;
            else if(tmp == -2)
                b++;
            else
                s.insert(tmp);
        }
        for(auto &i: s)
            vec.push_back(i);
        if(vec.size() == 0){
            int ans{max(a, b)};
            cout << min(ans, m) << "\n";
            continue;
        }
        int ans1{max(a + vec.size(), b + vec.size())};
        int ans2{};
        loop(i,0,vec.size(),1){
            int ans = min(a, vec[i] - (i + 1)) + min(b, m - vec[i] - int(vec.size()) + (i+1));
            ans2 = max(ans2, ans);
        }
        ans2 += vec.size();
        cout << min(m, max(ans1, ans2)) << "\n";
    }
}