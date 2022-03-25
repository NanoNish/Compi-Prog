#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n{0};
    cin >> n;
    int arr[n];
    loop(i, 0, n, 1) cin >> arr[i];
    int q;
    cin >> q;
    int l[q], r[q], k[q];
    ll brr[n]{}, sum[n]{};
    loop(i, 0, q, 1){
        cin >> l[i] >> r[i] >> k[i];
        brr[l[i] - 1] += k[i];
        brr[r[i]] -= k[i];
    }
    sum[0] = brr[0];
    loop(i,1,n,1){
        sum[i] = brr[i] + sum[i - 1];
    }
    sort(sum, sum + n);
    sort(arr, arr + n);
    int a{0}, b{0}, count{0};
    while(b < n){
        if(arr[a] <= sum[b]){
            count++;
            a++;
            b++;
        }
        else
            b++;
    }
    cout << count << "\n";
}