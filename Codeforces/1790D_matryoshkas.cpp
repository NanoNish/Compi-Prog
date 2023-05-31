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
        int n;
        cin >> n;
        multiset<int> s;
        loop(i, 0, n, 1){
            int tmp;
            cin >> tmp;
            s.insert(tmp);
        }
        int count{0};
        while(s.size()){
            count++;
            int tmp{*(s.begin())};
            s.erase(s.begin());
            while(true){
                tmp++;
                if(s.find(tmp) != s.end())
                    s.erase(s.find(tmp));
                else
                    break;
            }
        }
        cout << count << "\n";
    }
}