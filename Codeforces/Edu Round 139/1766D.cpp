#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MAXN 10000007
using namespace std;

int spf[MAXN]{};

void sieve(){
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
        spf[i] = i;
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;
    for (int i = 3; i * i < MAXN; i++){
        if (spf[i] == i){
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

vector<int> getFactorization(int x){
    vector<int> ret;
    while (x != 1){
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

int main(){
    FAST
    sieve();
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(__gcd(a, b) != 1){
            cout << 0 << "\n";
            continue;
        }
        if(a&1 && b&1){
            cout << 1 << "\n";
            continue;
        }
        if(abs(a-b)==1){
            cout << -1 << "\n";
            continue;
        }
        int gap = max(a, b) - min(a, b);
        vector<int> fac = getFactorization(gap);
        int mx{gap};
        for(auto &i: fac){
            mx = min(mx, ((a / i) + 1) * i - a);
        }
        cout << mx << "\n";
    }
}