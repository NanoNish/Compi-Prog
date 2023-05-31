#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[3]{};
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        if((arr[2] + arr[1] - 2*arr[0]) % 3 == 0)
            cout << "0\n";
        else
            cout << "1\n";
    }
}