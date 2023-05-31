#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    ld h,l;
    cin >> h >> l;
    if(h>l)
        swap(h, l);
    if(h >= (sqrt(3)*l/2)){
        cout << l << "\n";
        return 0;
    }
    cout << sqrt((2 * l - sqrt(3) * h) * (2 * l - sqrt(3) * h) + h * h) << "\n";
    return 0;
}