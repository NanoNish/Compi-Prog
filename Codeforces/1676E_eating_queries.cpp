#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        int arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        sort(arr, arr + n, greater<int>());
        loop(i, 1, n, 1) arr[i] += arr[i - 1];
        multiset<pair<ll,int>> s;
        loop(i, 0, n, 1) s.insert({arr[i], i+1});
        loop(i,0,q,1){
            ll tmp;
            cin >> tmp;
            auto it{s.lower_bound({tmp,0})};
            if(it == s.end())
                cout << -1 << "\n";
            else
                cout << (*it).second << "\n";
        }
    }
}