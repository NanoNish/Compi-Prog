#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n], presum[n];
        loop(i, 0, n, 1){
            cin >> arr[i];
            if(i==0)
                presum[i] = arr[0];
            else
                presum[i] = presum[i - 1] + arr[i];
        }
        int mx_count{1};
        loop(i,0,n,1){
            int ptr{i + 1};
            int count{1};
            bool flag{1};
            ll sum{0};
            while(ptr < n){
                sum += arr[ptr];
                if(sum == presum[i]){
                    count++;
                    sum = 0;
                }
                if(sum > presum[i]){
                    flag = 0;
                    break;
                }
                ptr++;
            }
            if(flag)
                mx_count = max(mx_count, count);
        }
        cout << n - mx_count << "\n";
    }
}