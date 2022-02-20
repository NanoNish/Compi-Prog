#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    loop(i, 1, t + 1, 1){
        cout << "Case #" << i << ":";
        int n{0}, temp{0};
        cin >> n;
        int arr[n]{0};
        int *ptr_arr[n];
        loop(j, 0, n, 1) ptr_arr[j] = &arr[j];
        loop(j, 1, n, 1) arr[j] = *(ptr_arr[j - 1]);
    }
}