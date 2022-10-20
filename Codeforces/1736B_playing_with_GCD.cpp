#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

inline ll lcm(ll a, ll b){
    return a * b / __gcd(a, b);
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n + 2]{};
        arr[0] = arr[n + 1] = 1;
        loop(i,1,n+1,1){
            cin >> arr[i];
        }
        ll brr[n+1]{};
        loop(i,0,n+1,1){
            brr[i] = lcm(arr[i], arr[i+1]);
        }
        bool flag{1};
        loop(i,1,n+1,1){
            if(__gcd(brr[i-1], brr[i]) != arr[i]){
                flag = 0;
                break;
            }
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }
}