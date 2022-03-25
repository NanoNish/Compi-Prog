#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int arr[7];
        loop(i, 0, 7, 1) cin >> arr[i];
        if(arr[0]+arr[1]+arr[2] == arr[6])
            cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
        else
            cout << arr[0] << " " << arr[1] << " " << arr[6] - arr[2] << "\n";
    }
}
// a b c a+b a+c b+c a+b+c a<b<c