#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    if(max(abs(r-8), abs(c-8)) & 1)
        cout << "black";
    else
        cout << "white";
}