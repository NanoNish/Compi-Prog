#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n{0}, l{0};
    double diff_mx{0};
    cin >> n >> l;
    int arr[n];
    loop(i, 0, n, 1) cin >> arr[i];
    sort(arr, arr + n);
    loop(i, 0, n - 1, 1) diff_mx = max(diff_mx, double(abs(arr[i + 1] - arr[i])));
    diff_mx = max(diff_mx / 2, max(abs(arr[0] - 0.0), abs(arr[n - 1] - double(l))));
    cout << fixed << diff_mx;
    return 0;
}