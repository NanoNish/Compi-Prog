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
        int arr[n]{};
        if(n & 1){
            int x = -n/2;
            loop(i,0,n,1){
                arr[i] = n + x + 2;
                x++;
            }
            arr[0]--;
            arr[n - 1]++;
            arr[n - 2]++;
        }
        else{
            loop(i,0,n/2,1){
                arr[n / 2 - 1 - i] = n - 1 - i;
                arr[n / 2 + i] = n + 1 + i;
            }
        }
        loop(i, 0, n, 1) cout << arr[i] << " ";
        cout << "\n";
    }
}

// 4
//  6 5 3 2 x=4
// x => 5, 5x+16=25 23456