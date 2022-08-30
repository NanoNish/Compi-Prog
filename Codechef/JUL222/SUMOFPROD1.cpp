#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        vector<ll> vec;
        int count{0};
        loop(i,0,n,1){
            if(arr[i])
                count++;
            else{
                vec.push_back(count);
                count = 0;
            }
        }
        if(count)
            vec.push_back(count);
        ll sum{0};
        for(auto i : vec){
            sum += i * (i + 1) / 2;
        }
        cout << sum << "\n";
    }
}
