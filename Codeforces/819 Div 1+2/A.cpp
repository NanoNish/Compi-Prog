#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n), brr;
        loop(i,0,n,1){
            cin >> arr[i];
        }
        brr = arr;
        sort(arr.begin(), arr.end());
        if(brr[0] == arr[0] || brr[n-1] == arr[n-1]){
            cout << arr[n - 1] - arr[0] << "\n";
            continue;
        }
        int best1, best2;
        best1 = arr[n - 1] - brr[0];
        best2 = brr[n - 1] - arr[0];
        int best3{0};
        loop(i,0,n,1){
            int tmp;
            tmp = brr[(n-1+i)%n] - brr[i];
            best3 = max(best3, tmp);
        }
        cout << max(best1, max(best2, best3)) << "\n";
    }
}