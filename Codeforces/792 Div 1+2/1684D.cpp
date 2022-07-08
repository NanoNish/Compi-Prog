#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n], saved[n], sort_saved[n];
        loop(i, 0, n, 1){
            cin >> arr[i];
            saved[i] = -arr[i] + n - i - 1;
            sort_saved[i] = saved[i];
        }

    }
}