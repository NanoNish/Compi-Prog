#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin >> n >> q;
        map<ll, pair<ll, ll>> m;
        loop(i,(ll)0,n,1){
            int tmp;
            cin >> tmp;
            if(m.find(tmp) != m.end()){
                m[tmp].first = min(m[tmp].first, i);
                m[tmp].second = max(m[tmp].second, i);
            }
            else{
                m[tmp].first = m[tmp].second = i;
            }
        }
        loop(i,0,q,1){
            int a,b;
            cin >> a >> b;
            if(m.find(a) == m.end() || m.find(b) == m.end())
                cout << "NO\n";
            else if(m[a].first < m[b].second)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}