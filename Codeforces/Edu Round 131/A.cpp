#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int tmp, count{0};
        loop(i,0,4,1){
            cin >> tmp;
            if(tmp&1)
                count++;
        }
        if(count == 0)
            cout << 0 << "\n";
        else if(count == 4)
            cout << 2 << "\n";
        else
            cout << 1 << "\n";
    }
}