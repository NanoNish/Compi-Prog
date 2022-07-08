#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll arr[n]{};
        ll sum{0};
        loop(i,0,n,1){
            cin >> arr[i];
            sum += arr[i];
        }
        ll mn = *min_element(arr, arr + n);
        cout << sum - n * mn << "\n";
    }
}