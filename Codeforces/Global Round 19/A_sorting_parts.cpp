#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0};
        cin >> n;
        int arr[n], org[n];
        loop(i,0,n,1){
            cin >> arr[i];
            org[i] = arr[i];
        }
        sort(arr, arr + n);
        bool flag{1};
        loop(i,0,n,1){
            if(org[i] != arr[i]){
                cout << "YES\n";
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "NO\n";
    }
    return 0;
}