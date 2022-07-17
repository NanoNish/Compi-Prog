#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, l, r;
        cin >> n >> l >> r;
        bool flag{1};
        ll arr[n]{};
        loop(i,1,n+1,1){
            if((((l/i) + 1) * i > r) && (l%i != 0)){
                flag = 0;
                break;
            }
            else{
                if(l%i == 0)
                    arr[i-1] = l;
                else
                    arr[i-1] = ((l / i) + 1) * i;
            }
        }
        if(!flag)
            cout << "NO\n";
        else{
            cout << "YES\n";
            for(auto i: arr)
                cout << i << " ";
            cout << "\n";
        }
    }
}