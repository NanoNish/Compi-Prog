#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[m];
    loop(i, 0, m, 1) cin >> arr[i];
    sort(arr, arr + m, greater<int> ());
    int mn{arr[0] - arr[n-1]};
    loop(i, 1, m - n + 1, 1){
        if(arr[i] - arr[i+n-1] < mn){
            mn = arr[i] - arr[i + n - 1];
        }
    }
    cout << mn;
}