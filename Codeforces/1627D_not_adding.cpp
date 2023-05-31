#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int n;
    cin >> n;
    int mp[1000005]{}, mx{};
    loop(i, 0, n, 1){
        int tmp;
        cin >> tmp;
        mp[tmp]++;
        mx = max(mx, tmp);
    }
    int count{};
    loop(i,1,mx+1,1){
        if(mp[i])
            continue;
        int j{i};
        int gcd{}, flag{1};
        while (j < mx + 1){
            if(mp[j]){
                if(flag){
                    gcd = j;
                    flag = 0;
                }
                else{
                    gcd = __gcd(gcd, j);
                }
            }
            j += i;
        }
        if(!flag && gcd == i){
            count++;
        }
    }
    cout << count;
}