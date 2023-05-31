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
        vector<int> arr(n);
        loop(i,0,n,1) cin >> arr[i];
        bool mapb[n]{}, mapc[n]{};
        int countb{0}, countc{0}, countcommon{0};
        loop(i,0,n,1){
            if(arr[i] != i+1){ 
                mapb[i] = 1; 
                countb++;
            }
            if(arr[i] != n-i){
                mapc[n-i-1] = 1;
                countc++;
            }
        }
        loop(i,0,n,1) if(mapb[i] && mapc[i]){
            countcommon++;
        }
        if(countb <= countc - countcommon) cout << "First\n";
        else if(countc < countb - countcommon) cout << "Second\n";
        else cout << "Tie\n";
    }
}