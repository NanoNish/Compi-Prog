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
        ll arr[n];
        string s{""};
        loop(j,0,n,1){
            cin >> arr[j];
            s += '0';
        }
        ll max{0};
        loop(j,0,n,1){
            ll sum = (s[j] == '1' ? j + arr[j] : arr[j]);
            if (max < sum)
                max = sum;
            if(j + arr[j] < n)
                s[j + arr[j]] = '1';
        }
        cout << max << endl;
    }
    return 0;
}