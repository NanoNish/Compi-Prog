#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(n >= m){
        cout << n - m;
        return 0;
    }
    int y = m;
    while(1){
        if(m & 1)
            break;
        else if(m < n)
            break;
        m /= 2;
    }
    if(m > n){
        int x = int(ceil(log2(m / n)));
        cout << x + n * pow(2, x) - m + int(log2(y / m));
        return 0;
    }
    cout << n - m + int(log2(y / m));
    return 0;
}