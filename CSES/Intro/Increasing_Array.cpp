#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    ll tmp, count{0};
    cin >> tmp;
    ll test{tmp};
    loop(i,1,n,1){
        cin >> tmp;
        if(tmp < test)
            count += test - tmp;
        else
            test = tmp;
    }
    cout << count;
}