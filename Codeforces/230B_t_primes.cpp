#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

/*TLE Solution*/

// int main(){
//     int n{0};
//     cin >> n;
//     loop(i, 0, n, 1){
//         ll temp;
//         cin >> temp;
//         long double sqrt_temp = pow(temp, 0.5);
//         if(ceil(sqrt_temp) != floor(sqrt_temp) || sqrt_temp == 1.0){
//             cout << "NO" << endl;
//             continue;
//         }
//         temp = floor(sqrt_temp);
//         bool flag{0};
//         for (auto j{2}; j*j <= temp; j++){
//             if(temp % j == 0){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag)
//             cout << "NO" << endl;
//         else
//             cout << "YES" << endl;
//     }
// }

/*dp style solution to make it a linear logic*/

// bool isprime(int n){
//     for (int i{2}; i * i <= n; i++){
//         if(n % i == 0)
//             return false;
//     }
//     return true;
// }

// int main(){
//     vector<bool> vec(1000001, 0);
//     for (ll i{2}; i <= 1000000; i++){
//         if(isprime(i))
//             vec.at(i) = 1;
//     }
//     int n{0};
//     cin >> n;
//     loop(i, 0, n, 1){
//         ll x;
//         cin >> x;
//         if(floor(sqrt(x)) != ceil(sqrt(x)))
//             x = 0;
//         else
//             x = floor(sqrt(x));
//         if(vec.at(x))
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }

/*dp style but faster preprocessing*/

int main(){
    vector<bool> vec(1000001, 1);
    vec.at(0) = vec.at(1) = 0;
    for (ll i{2}; i < 1000001; i++){
        if(vec.at(i)){
            for (ll j{2}; i * j < 1000001; j++){
                vec.at(i * j) = 0;
            }
        }
    }
    int n{0};
    cin >> n;
    loop(i, 0, n, 1){
        ll x;
        cin >> x;
        if(floor(sqrt(x)) != ceil(sqrt(x)))
            x = 0;
        else
            x = floor(sqrt(x));
        if(vec.at(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}