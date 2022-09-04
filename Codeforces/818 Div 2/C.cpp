#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n]{}, brr[n]{};
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i, 0, n, 1) cin >> brr[i];
        bool flag{0};
        int mx_ind{0}, mx_b{brr[0]};
        loop(i,0,n,1){
            if(arr[i] > brr[i]){
                flag = 1;
                break;
            }
            if(brr[i] > mx_b){
                mx_ind = i;
                mx_b = max(mx_b, brr[i]);
            }
        }
        if(flag){
            cout << "NO\n";
            continue;
        }
        loop(i,0,n-1,1){
            if(brr[i+1] < brr[i] - 1 && arr[i] != brr[i])
               flag = 1;
        }
        if (brr[0] < brr[n-1] - 1 && arr[n-1] != brr[n-1])
            flag = 1;
        if(flag)
            cout << "NO\n";

        else
            cout << "YES\n";
    }
}