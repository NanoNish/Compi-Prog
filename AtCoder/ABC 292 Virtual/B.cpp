#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int yellow[n+1]{}, red[n+1]{};
    loop(i,0,q,1){
        int a, b;
        cin >> a >> b;
        if(a == 1)
            yellow[b]++;
        if(a ==2)
            red[b]++;
        if(a == 3){
            cout << (red[b] >= 1 || yellow[b] >= 2 ? "Yes\n" : "No\n");
        }
    }
}