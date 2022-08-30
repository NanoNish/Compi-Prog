#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int x1{0}, x2{0}, y1{0}, y2{0};
        loop(i,0,n,1){
            int a, b;
            cin >> a >> b;
            if(a>0)
                x1 = max(x1, a);
            else if(a<0)
                x2 = max(x2, abs(a));
            else if(b<0)
                y2 = max(y2, abs(b));
            else
                y1 = max(y1, b);
        }
        cout << 2 * (x1 + x2 + y1 + y2) << "\n";
    }
}