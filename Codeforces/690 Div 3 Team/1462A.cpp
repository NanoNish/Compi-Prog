#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        for (int i{0}, j{n - 1}; i < j; i++,j--){
            cout << arr[i] << " ";
            cout << arr[j] << " ";
        }
        if (n & 1)
            cout << arr[n / 2];
        cout << "\n";
    }
}