#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int arr[n], marked[m]{};
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i,0,n,1){
            if(marked[min(arr[i], m+1-arr[i]) - 1] == 0){
                marked[min(arr[i], m + 1 - arr[i]) - 1] = 1;
            }
            else
                marked[max(arr[i], m + 1 - arr[i]) - 1] = 1;
        }
        loop(i,0,m,1){
            if(marked[i])
                cout << 'A';
            else
                cout << 'B';
        }
        cout << "\n";
    }
}