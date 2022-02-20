#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n>=0){
        cout << n;
        return 0;
    }
    n = -1 * n;
    if(n/100 == 0 && n%10 == 0){
        cout << 0;
        return 0;
    }
    cout << "-" << (n / 100 != 0 ? to_string(n / 100) : "") << min((n % 100) / 10, n % 10);
    return 0;
}