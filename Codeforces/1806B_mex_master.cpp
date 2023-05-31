#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n]{};
        loop(i, 0, n, 1) cin >> arr[i];
        int count0{0}, count1{0};
        loop(i,0,n,1){
            if(arr[i] == 0)
                count0++;
            if(arr[i] == 1)
                count1++;
        }
        if(count0 > n - count0 + 1){
            cout << 0 << "\n";
            continue;
        }
        if(n - count0 - count1){
            cout << 2 << "\n";
            continue;
        }
        cout << 1 << "\n";
    }
}