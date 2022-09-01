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
        int a[n], b[n];
        loop(i, 0, n, 1) cin >> a[i];
        loop(i, 0, n, 1) cin >> b[i];
        ll count1{0}, count2{0};
        loop(i,0,n,1){
            if(a[i]>b[i])
                count1 += a[i] - b[i];
            else
                count2 += b[i] - a[i];
        }
        if(count1 == count2){
            cout << count1 << "\n";
        }
        else
            cout << -1 << "\n";
    }
}