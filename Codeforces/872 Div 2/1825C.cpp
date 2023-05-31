#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> vec;
        set<int> s;
        int countl{}, countr{};
        loop(i,0,n,1){
            int tmp;
            cin >> tmp;
            if(tmp == -1)
                countr++;
            else if(tmp == -2)
                countl++;
            else
                s.insert(tmp);
        }
        for(auto &i: s) vec.push_back(i);
        if(vec.size() == 0){
            int ans{max(countl, countr)};
            cout << min(ans, m) << "\n";
            continue;
        }
        int ans{}, ans2{}, flag{0};
        int l{*vec.begin() - 1}, r{m - *vec.rbegin()};
        if(l > r){
            countl -= l;
            ans += l;
            flag = 1;
        }
        else{
            countr -= r;
            ans += r;
        }
        int remain{*vec.rbegin() - *vec.begin() + 1 - vec.size()};
        ans += vec.size();
        ans += min(remain, countl + countr);
        ans = min(ans, m);
        if(flag)
            countl += l;
        else
            countr += r;
        swap(countl, countr);
        ans2 += vec.size();
        ans2 += min(countl, l);
        countl -= min(countl, l);
        ans2 += min(countr, r);
        countr -= min(countr, r);
        ans2 += min(remain, countl + countr);
        ans2 = min(ans, m);
        cout << max(ans, ans2) << "\n";
    }
}