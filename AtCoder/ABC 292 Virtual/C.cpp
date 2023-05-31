#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int N = 200005;
    int divisors[N + 1]{};
    for (int i = 1; i <= N; ++i)
        for (int j = i; j <= N; j += i)
            ++divisors[j];
    int n;
    cin >> n;
    ll ans{};
    loop(i,1,n,1){
        ans += divisors[i] * divisors[n - i];
    }
    cout << ans;
}