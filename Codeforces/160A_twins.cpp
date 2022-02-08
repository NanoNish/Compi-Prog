#include <bits/stdc++.h>
using namespace std;

int main(){
    int n{}, count{0};
    cin >> n;
    long long sum{0}, vro{0};
    int arr[n]{};
    for (int i{0}; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);
    for (int i{n-1}; i >= 0; i--){
        vro += arr[i];
        count++;
        if(vro > sum - vro)
            break;
    }
    cout << count << endl;
}