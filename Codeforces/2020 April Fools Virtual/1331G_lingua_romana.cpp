#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int arr[11]{};
    float ans[11]{};
    loop(i, 0, 11, 1) cin >> arr[10 - i];
    cout << fixed << setprecision(2);
    loop(i,0,11,1){
        ans[i] = pow(arr[i], 3) * 5 + sqrt(abs(arr[i]));
        if (ans[i] <= 400.000001)
            cout << "f(" << arr[i] << ") = " << ans[i] << "\n";
        else
            cout << "f(" << arr[i] << ") = MAGNA NIMIS!\n";
    }
}