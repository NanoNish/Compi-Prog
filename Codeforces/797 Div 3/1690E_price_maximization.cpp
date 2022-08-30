#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> vec(0);
        ll cost{0};
        loop(i, 0, n, 1){
            ll tmp;
            cin >> tmp;
            cost += tmp / k;
            if(tmp % k)vec.push_back(tmp % k);
        }
        sort(vec.begin(), vec.end());
        int l{0}, r{vec.size()-1};
        while(l<r){
            if(vec[l] + vec[r] >= k){
                cost++;
                r--;
            }            
            l++;
        }
        cout << cost << "\n";
    }
}