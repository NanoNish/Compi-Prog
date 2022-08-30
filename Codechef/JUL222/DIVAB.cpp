#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a, b, n;
        cin >> a >> b >> n;
        if(a%b==0){
            cout << -1 << "\n";
            continue;
        }
        if(n % a != 0)
            n = a * (n / a + 1);
        do{
            if(n%b){
                cout << n << "\n";
                break;
            }
            else
                n += a;
        } while (true);
    }
}