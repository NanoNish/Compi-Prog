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
        int arr[3]{};
        loop(i, 0, 3, 1) arr[i] = 10000007;
        loop(i,0,n,1){
            int n;
            string s;
            cin >> n >> s;
            if(s == "11"){
                arr[0] = min(arr[0], n);
            } 
            if(s == "01"){
                arr[1] = min(arr[1], n);
            } 
            if(s == "10"){
                arr[2] = min(arr[2], n);
            } 
        }
        if(min(arr[0], arr[1]+arr[2]) > 1000000)
            cout << -1 << "\n";
        else
            cout << min(arr[0], arr[1] + arr[2]);
    }
}