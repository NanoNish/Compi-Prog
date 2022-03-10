#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        int diff[a.length() + 1]{}, diffsum[a.length() + 1]{};
        loop(i,1,n+1,1){
            diff[i] = b[i] - a[i] + (b[i] > a[i] ? 0 : 26);
            diffsum[i] = diffsum[i - 1] + pow(-1,i)*diff[i];
        }
        while(q--){
            int l, r;
            cin >> l >> r;
            int ans;
            if(diff[r] == - diffsum[r-1] + diffsum[l-1])
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}
