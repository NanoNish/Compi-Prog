#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

//code from gfg to find gcd
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

int main(){
    int n{0};
    cin >> n;
    int arr[n];
    loop(i, 0, n, 1) cin >> arr[i];
    sort(arr, arr + n);
    bool flag1{0}, flag2{0};
    loop(i,0,n-1,1){
        if(arr[i] != arr[i+1])
            flag1 = 1;
        else
            flag2 = 1;
    }
    if(flag1 && flag2){
        cout << 0;
        return 0;
    }
    if(!flag1 && flag2){
        cout << 1;
        return 0;
    }
    int diff[n - 1];
    loop(i, 0, n - 1, 1) diff[i] = arr[i + 1] - arr[i];
    int mn = gcd(diff[0], diff[1]);
    loop(i,2,n-1,1){
        mn = gcd(mn, diff[i]);
    }
    int count{0};
    for(int i{1}; i*i < mn; i++){
        if (mn % i == 0)
            count += 2;
    }
    if(floor(sqrt(mn)) == ceil(sqrt(mn)))
        count++;
    cout << 2 * count;
}