#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

//Code to get GCD of an array from GFG
ll gcd(ll a, ll b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
ll findGCD(vector<ll> vec){
    ll result = vec[0];
    for (auto i = 1; i < vec.size(); i++){
        result = gcd(vec[i], result);
        if (result == 1) return 1;    
    }
    return result;
}

int main(){
    int t{0};
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> odd, even;
        loop(i,0,n,1){
            ll tmp;
            cin >> tmp;
            if (i & 1)
                odd.push_back(tmp);
            else
                even.push_back(tmp);
        }
        ll a, b;
        a = findGCD(odd);
        b = findGCD(even);
        bool flag1{1}, flag2{1};
        if(a == 1)
            flag1 == 0;
        if(b==1)
            flag2 == 0;
        for(auto i : odd){
            if(i%b == 0)
                flag2 = 0;
        }
        for (auto i : even){
            if (i % a == 0)
                flag1 = 0;
        }
        if(!(flag1 || flag2)){
            cout << 0 << "\n";
            continue;
        }
        if(flag1){
            cout << a << "\n";
            continue;
        }
        cout << b << "\n";
    }
}