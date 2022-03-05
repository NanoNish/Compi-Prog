#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

//Solution 1: make a multiple of 10

// int main(){
//     int n{0}, t{0};
//     cin >> n >> t;
//     if(n == 1){
//         cout << (t == 10 ? -1 : t);
//         return 0;
//     }
//     if(t == 10){
//         cout << 10;
//         loop(i,0,n-2,1){
//             cout << 0;
//         }
//     }
//     else{
//         cout << t;
//         loop(i,0,n-1,1){
//             cout << 0;
//         }
//     }
//     return 0;
// }

//Solution 2: repeating digits

// int main(){
//     int n, t;
//     cin >> n >> t;
//     if(n == 1 && t == 10)
//         cout << -1;
//     else if(t == 10){
//         cout << 1;
//         loop(i, 0, n - 1, 1) cout << 0;
//     }
//     else
//         loop(i, 0, n, 1) cout << t;
//     return 0;
// }

//Solution 3: log : doesnt work

// int main(){
//     int n, t;
//     cin >> n >> t;
//     if(n == 1 && t == 10)
//         cout << -1;
//     else{
//         cout << fixed << setprecision(0) << pow(t, floor((log(pow(10, n))) / log(t)));
//     }
//     return 0;
// }
