#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> s;
    loop(i,0,n,1){
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    cout << s.size();
}