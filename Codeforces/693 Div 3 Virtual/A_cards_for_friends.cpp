#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int w, h, n;
        cin >> w >> h >> n;
        w *= h;
        h = 0;
        while(w%2==0){
            h++;
            w /= 2;
        }
        if(pow(2,h) >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}