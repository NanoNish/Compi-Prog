#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int s, n;
    cin >> s >> n;
    int hp[n], bonus[n];
    loop(i, 0, n, 1) cin >> hp[i] >> bonus[i];
    loop(i, 0, n, 1) 
        loop(j, 0, n, 1)
            if(s > hp[j]){
                s += bonus[j];
                hp[j] = bonus[j] = 0;
            }
        
    bool flag{1};
    loop(i, 0, n, 1) if (hp[i] != 0) flag = 0;
    if(flag)
        cout << "YES";
    else
        cout << "NO";
}