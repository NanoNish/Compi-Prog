#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

// code from gfg to find gcd
int gcd(int a, int b){
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    // base case
    if (a == b)
        return a;
    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

// int gcd(int n,int m){
//     if(m < n){
//         int temp = n;
//         n = m;
//         m = temp;
//     }
//     return (m % n == 0 ? n : gcd(n, m % n));
// }

void print0(ll arr[], int n){
    loop(i,1,n,1){
        if(arr[i] != arr[i-1]){
            cout << 0;
            return;
        }
    }
    cout << 1;
    return;
}

int main(){
    int n{0};
    cin >> n;
    ll arr[n];
    loop(i, 0, n, 1) cin >> arr[i];
    sort(arr, arr + n);
    ll mn{arr[1]-arr[0]};
    if(mn == 0){
        print0(arr, n);
        return 0;
    }
    loop(i, 2, n, 1){
        ll temp;
        temp = arr[i] - arr[i - 1];
        if (temp == 0){
            print0(arr, n);
            return 0;
        }
        mn = gcd(mn, temp);
    }
    ll count{0};
    loop(i,1,mn + 1,1){
        if(mn % i == 0)
            count++;
    }
    cout << 2 * count;
    return 0;
}