#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n{0};
    cin >> n;
    int arr[n];
    ll presum[n]{};
    loop(i, 0, n, 1){ 
        cin >> arr[i];
        //directly the statement in else alone will also work
        if(i == 0)
            presum[i] = arr[i];
        else
            presum[i] = presum[i - 1] + arr[i];
    }
    if(n<3){
        cout << 0;
        return 0;
    }
    if (presum[n - 1] % 3 != 0){
        cout << 0;
        return 0;
    }
    if(presum[n-1] == 0){
        ll count{0};
        loop(i,0,n,1){
            if(presum[i] == 0)
                count++;
        }
        if(count < 3){
            cout << 0;
            return 0;
        }
        cout << ((count - 1) * (count - 2)) / 2;
        return 0;
    }
    ll count_1{0}, count_2{0};
    loop(i,0,n,1){
        if(presum[i] == presum[n-1]/3)
            count_1++;
        if (presum[i] == 2 * (presum[n - 1] / 3))
            count_2++;
    }
    cout << count_1 * count_2;    
}