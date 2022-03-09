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
        ll arr[n], sumb{0}, sumr{0};
        loop(i,0,n,1)
            cin >> arr[i];
        sort(arr, arr + n);
        sumb += arr[0];
        loop(i,0,n/2,1){
            sumb += arr[i];
            sumr += arr[n - i];
            if(sumr > sumb){
                cout << "YES\n";
                goto label;
            }
        }
        cout << "NO\n";
        label:
    }
}