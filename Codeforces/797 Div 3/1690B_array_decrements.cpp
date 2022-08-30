#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        ll a[n], b[n];
        loop(i, 0, n, 1) cin >> a[i];
        loop(i, 0, n, 1) cin >> b[i];
        set<ll> s, s0;
        bool flag{1};
        loop(i,0,n,1){
            if(b[i] > a[i]){
                flag = 0;
                break;
            }
            else if(b[i] == 0)
                s0.insert(a[i] - b[i]);
            else
                s.insert(a[i] - b[i]);
        }
        if(s.size() > 1)
            flag = 0;
        // else if(s.size() == 0 && s0.size() > 0)
        //     flag = 0;
        else if(s.size() == 1 && s0.size() > 0 && *(s0.rbegin()) > *(s.begin()))
            flag = 0;
        if(!flag){
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
}