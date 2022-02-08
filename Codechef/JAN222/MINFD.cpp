#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x;
    cin >> t;
    for (int i = 0; i < t;i++){
        cin >> n >> x;
        int arr[n];
        for (int k{0}; k < n; k++){
            cin >> arr[k];
        }
        sort(arr, arr + n);
        int sum{0}, flag{0};
        for (int j = 0; j < n;j++){
            sum += arr[n-1-j];
            if(flag == 0 && sum >= x){
                cout << j+1 << endl;
                flag++;
            }
        }
        if(sum < x)
            cout << -1 << endl;
    }
}