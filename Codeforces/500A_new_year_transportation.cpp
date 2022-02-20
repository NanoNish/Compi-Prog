#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
using namespace std;

/*Using dp: time = 31 ms, mem = 100 kb*/

int main(){
    int n, t;
    cin >> n >> t;
    t--;
    int arr[n-1];
    loop(i, 0, n-1, 1) cin >> arr[i];
    int j{t};
    while(j--){
        if(j + arr[j] < t)
            arr[j] += arr[j + arr[j]];
    }
    if(arr[0] == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

/*Using direct approach: time = 46 ms, mem = 100 kb*/

// int main(){
//     int n, t;
//     cin >> n >> t;
//     int arr[n - 1];
//     loop(i, 0, n - 1, 1) cin >> arr[i];
//     loop(i, 0, n - 1, 0){
//         if( i + arr[i] == t - 1){
//             cout << "YES";
//             return 0;
//         }
//         i += arr[i];
//     }
//     cout << "NO";
//     return 0;
// }