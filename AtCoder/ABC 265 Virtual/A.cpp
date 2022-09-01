#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int x, y, n;
    cin >> x >> y >> n;
    if(3*x <= y){
        cout << n * x;
        return 0;
    }
    cout << n % 3 * x + n / 3 * y;
}