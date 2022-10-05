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
        int d[n]{}, arr[n]{};
        loop(i, 0, n, 1) cin >> d[i];
        arr[0] = d[0];
        bool flag{1};
        loop(i,1,n,1){
            if(d[i] == 0){
                arr[i] = arr[i - 1];
                continue;
            }
            else if(d[i] <= arr[i-1]){
                cout << -1;
                flag = 0;
                break;
            }
            else arr[i] = arr[i-1] + d[i];
        }
        if(flag)
            loop(i, 0, n, 1) cout << arr[i] << " ";
        cout << "\n";
    }
}