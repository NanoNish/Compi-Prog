#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll convert(ll n){
    while(!(n&1)){
        n /= 2;
    }
    return n;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        multiset<ll> a, b;
        loop(i,0,n,1){
            int tmp;
            cin >> tmp;
            a.insert(convert(tmp));
        }
        loop(i, 0, n, 1){
            int tmp;
            cin >> tmp;
            b.insert(convert(tmp));
        }
        bool flag{1};
        auto it = b.begin();
        loop(i,0,n,1){
            int tmp{*it};
            while(true){
                if(tmp == 0){
                    flag = 0;
                    break;
                }
                else if(a.find(tmp) != a.end()){
                    b.erase(it++);
                    a.erase(a.find(tmp));
                    break;
                }
                else{
                    tmp /= 2;
                }
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }    
}