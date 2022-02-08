#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        int n{0};
        cin >> n;
        float arr[n];
        for (int j{0}; j < n; j++)
            cin >> arr[j];
        sort(arr, arr + n);
        float sum{0};
        for (int j{0}; j < n - 1; j++)
            sum += arr[j];
        cout << fixed << setprecision(6) << (sum / (n - 1)) + arr[n-1] << endl;
    }
    return 0;
}