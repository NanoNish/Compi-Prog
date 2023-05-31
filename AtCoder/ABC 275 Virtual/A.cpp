#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    int flag{1}, tmp;
    cin >> tmp;
    loop(i,1,n,1){
        int t;
        cin >> t;
        if(t > tmp){
            flag = i + 1;
            tmp = t;
        }
    }
    cout << flag;
}