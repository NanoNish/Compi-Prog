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
        int arr[n][n - 1]{};
        loop(i, 0, n, 1) loop(j, 0, n - 1, 1) cin >> arr[i][j];
        map<int, int> m;
        loop(i,0,n,1){
            m[arr[i][0]]++;
        }
        int first{}, line{};
        loop(i,1,n+1,1){
            if(m[i] == n-1)
                first = i;
        }
        loop(i,0,n,1) if(arr[i][0] != first){
            line = i;
            break;
        }
        cout << first << " ";
        loop(i, 0, n - 1, 1) cout << arr[line][i] << " ";
        cout << "\n";
    }
}