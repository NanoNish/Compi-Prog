#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0};
        ll sum{0}, new_sum{0};
        cin >> n;
        int arr[n];
        loop(i, 0, n, 1){
            cin >> arr[i];
            sum += arr[i];
        }
        if(n==1){
            cout << arr[0] << endl;
            continue;
        }
        int i{0};
        while(new_sum < sum - new_sum){
            new_sum += arr[i];
            i++;
        }
        cout << min(new_sum, sum - new_sum + arr[--i]) << endl;
    }
    return 0;
}