#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    loop(i, 1, t + 1, 1){
        int n, m, p;
        cin >> n >> m >> p;
        string choice[n], forbid[m];
        loop(j, 0, n, 1) cin >> choice[j];
        loop(j, 0, m, 1) cin >> forbid[j];
        int counts[p];
        loop(j, 0, p, 1) loop(k, 0, n, 1) counts[j] += choice[k][j];
        
    }
}