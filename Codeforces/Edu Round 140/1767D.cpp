#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main(){
    FAST
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1{0};
    loop(i, 0, s.length(), 1) if (s[i] == '1') count1++;
    int count0{n - count1};
    ll l, r;
    l = binpow((ll)2, count1) - 1;
    r = binpow((ll)2, count0) - 1;
    r = binpow((ll)2, (ll)n) - r;
    loop(i, l+1, r+1, 1) cout << i << " ";
}   