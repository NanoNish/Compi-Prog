#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define binarystring(n, x) bitset<n>(x).to_string()
using namespace std;

ll BinExpItr(ll a , ll b){
    ll res=1;
    while(b){
        if(b&1){
            res=(res*a);
        }
        a=(a*a);
        b>>=1;
    }
    return res;
}

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m]{};
    loop(i,0,m,1){
        int c;
        cin >> c;
        loop(j,0,c,1){
            int tmp;
            cin >> tmp;
            arr[--tmp][i] = 1;
        }
    }
    int count{};
    loop(cnt,1,BinExpItr(2,m),1){
        bool flag{1};
        bitset<10> x(cnt);
        int check[n]{};
      	loop(i,0,m,1){
           	if(x[i] == 1){
                loop(j, 0, n, 1) check[j] += arr[j][i];
            }
        }
        loop(i, 0, n, 1) if (check[i] == 0) flag = 0;
        if(flag)
            count++;
    }
    cout << count << "\n";
}