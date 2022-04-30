#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n;
    cin >> n;
    ll arr[n];
    loop(i, 0, n, 1) cin >> arr[i];
    ll min_count;
    loop(i,0,n,1){
        ll count{0}, tmp{0};
        loop(j, i + 1, n, 1){
            count += ceil((tmp + 1) / double(arr[j]));
            tmp = (ceil((tmp + 1) / double(arr[j]))) * arr[j];
        }
        tmp = 0;
        for (auto j{i - 1}; j >= 0; j--){
            count += ceil((tmp + 1) / double(arr[j]));
            tmp = (ceil((tmp + 1) / double(arr[j]))) * arr[j];
        }
        if(i == 0)
            min_count = count;
        else
            min_count = min(min_count, count);
    }
    cout << min_count;
}