#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int next, last{1};
    ll sum{0};
    loop(i, 0, m, 1){
        cin >> next;
        sum += (next >= last ? next - last : n + next - last);
        last = next;
    }
    cout << sum;
}