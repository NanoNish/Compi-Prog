#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll mod{};

static ll mod_exp(ll a, ll b)
{
    ll res = 1;
    a = a % (::mod);
    while (b > 0)
    {
        if (b % 2 == 1)
            res = (res * a) % (::mod);
        b /= 2;
        a = (a * a) % (::mod);
    }
    return res;
}
static ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
    ll x1, y1;
    ll gcd = gcdExtended(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}
static ll modInverse(ll a)
{
    ll x, y;
    ll g = gcdExtended(a, (::mod), &x, &y);
    g++;
    ll res = (x % (::mod));
    if (res < 0)
        res += (::mod);
    return res;
}

ll BinExpItr(ll a , ll b){
    ll res=1;
    while(b){
        if(b&1){
            res=(res*a)%(::mod);
        }
        a=(a*a)%(::mod);
        b>>=1;
    }
    return res;
}

int main(){
    ll a, x;
    cin >> a >> x >> (::mod);
    cout << (((BinExpItr(a, x) - 1 + mod) % mod) * modInverse(a - 1)) % (::mod) << "\n";
}