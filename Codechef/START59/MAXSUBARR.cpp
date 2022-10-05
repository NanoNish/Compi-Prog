#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

//Taken from GFG
ll maxSubArraySum(vector<ll> a, int size){
    ll max_so_far = INT_MIN, max_ending_here = 0;
 
    for (ll i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here; 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, m;
        cin >> n;
        vector<ll> a1(n), a2, b(m);
        loop(i, 0, n, 1) cin >> a1[i];
        a2 = a1;
        reverse(a2.begin(), a2.end());
        cin >> m;
        loop(i, 0, m, 1) cin >> b[i];
        loop(i,0,m,1){
            if(b[i]>0){
                a1.push_back(b[i]);
                a2.push_back(b[i]);
            }
        }
        ll ans{0};
        ans = max(maxSubArraySum(a1, a1.size()), maxSubArraySum(a2, a2.size()));
        cout << ans << "\n";
    }
}