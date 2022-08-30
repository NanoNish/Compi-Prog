#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a, b, c;
        loop(i,0,n,1){
            ll tmp;
            cin >> tmp;
            if (tmp % 10 == 1 || tmp % 10 == 2 || tmp % 10 == 4 || tmp % 10 == 8)
                a.push_back(tmp);
            else if (tmp % 10 == 3 || tmp % 10 == 6 || tmp % 10 == 7 || tmp % 10 == 9)
                b.push_back(tmp);
            else
                c.push_back(tmp);
        }
        if(c.size() != 0 && (a.size() || b.size())){
            cout << "No\n";
            continue;
        }
        if(c.size() != 0){
            for(auto &i: c){
                if(i%10 == 5)
                    i += 5;
            }
            ll tmp{c.at(0)};
            bool flag = 1;
            loop(i,1,c.size(),1){
                if(tmp != c.at(i)){
                    cout << "No\n";
                    flag = 0;
                    break;
                }
            }
            if(flag)
                cout << "Yes\n";
            continue;
        }
        bool flag_a{0};
        ll tmp{0};
        if(a.size() != 0){
            tmp = a.at(0) % 100 - a.at(0) % 10;
            flag_a = 1;
        }
        else
            tmp = b.at(0) % 100 - b.at(0) % 10;
        tmp /= 10;
        bool flag{1};
        for(auto &i: a){
            ll x = i % 100 - i % 10;
            x /= 10;
            if(flag_a){
                if(abs(x-tmp)%2 == 1)
                    flag = 0;
            }
            else{
                if (abs(x-tmp)%2 == 0)
                    flag = 0;
            }
        }
        for (auto &i : b){
            ll x = i % 100 - i % 10;
            x /= 10;
            if (flag_a){
                if (abs(x-tmp)%2 == 0)
                    flag = 0;
            }
            else{
                if (abs(x-tmp)%2 == 1)
                    flag = 0;
            }
        }
        if(flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}

// Logic

// 1 2 4 8 16 22
// 2 4 8 16 22
// 3 6 12 --> 32
// 4 -> 22
// 5 10 
// 6 -> 32
// 7 14 -> 32
// 8 -> 22
// 9 18 -> 32

// 1 2 4 8 -> 22
// 3 6 7 9 -> 32
// 5 -> 10
// 0 -> 0