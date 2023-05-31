#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    ll n;
    cin>>n;
    if(n==1){
        cout << 1;
        return 0;
    }
    do{
        cout << n << " ";
        if(n&1)
            n = 3 * n + 1;
        else
            n /= 2;
    } while (n != 1);
    cout << 1;
}