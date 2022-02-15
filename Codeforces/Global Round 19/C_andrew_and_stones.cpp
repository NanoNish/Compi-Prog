#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        ll n{0};
        cin >> n;
        ll arr[n], count{0}, count_1{0};
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i, 1, n - 1, 1){
            if(arr[i] == 1)
                count_1++;
            count += (arr[i]+1) / 2;
        }
        if(count_1 == n-2 || (n==3 && arr[1]&1 == 1))
            cout << -1 << endl;
        else
            cout << count << endl;
    }
}