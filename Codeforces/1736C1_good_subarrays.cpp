#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int tmp, prev{0};
        ll sum{0};
        loop(i, 0, n, 1){
            cin >> tmp;
            prev = min(prev + 1, tmp);
            sum += prev;
        }
        cout << sum << "\n";
    }
}