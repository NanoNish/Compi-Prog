#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n]{}, brr[m]{};
    loop(i, 0, n, 1) cin >> arr[i];
    loop(i, 0, m, 1) cin >> brr[i];
    sort(arr, arr + n);
    sort(brr, brr + m);
    int b_ind{0};
    int count{};
    loop(i,0,n,1){
        while(b_ind < m){
            if(brr[b_ind] < arr[i] - k){
                b_ind++;
                continue;
            }
            if(brr[b_ind] > arr[i] + k)
                break;
            count++;
            b_ind++;
            break;
        }
    }
    cout << count;
}