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
        long double h, c, t,r;
        cin >> h >> c >> t;
        if(2*t == h+c){
            cout << 2 << "\n";
            continue;
        }
        r = (h - t) / (2 * t - c - h);
        if(r < 0){
            cout << 2 << "\n";
            continue;
        }
        r = floor(r);
        long double t1, t2;
        t1 = ((r + 1) * h + r * c) / (2 * r + 1);
        r++;
        t2 = ((r + 1) * h + r * c) / (2 * r + 1);
        long double d1{abs(t1-t)}, d2{abs(t2-t)}, d3{abs(t-(h+c)/2)};
        pair<long double, int> arr[4]{};
        arr[0] = {d1, 2 * r - 1};
        arr[1] = {d2, 2 * r + 1};
        arr[2] = {d3, 2};
        arr[3] = {abs(t - h), 1};
        sort(arr, arr + 4);
        cout << arr[0].second << "\n";
    }
}