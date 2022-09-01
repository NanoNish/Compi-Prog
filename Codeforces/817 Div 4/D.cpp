#include <bits/stdc++.h>
#define int long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int diff[n];
        int score{};
        loop(i,0,n,1){
            if(s[i] == 'L'){
                score += i;
                diff[i] = n - 1 - i - i;
            }
            else{
                score += n - 1 - i;
                diff[i] = i - n + 1 + i;
            }
            diff[i] = max(diff[i], (long long)0);
        }
        sort(diff, diff + n);
        reverse(diff, diff + n);
        loop(i,1,n,1){
            diff[i] += diff[i - 1];
        }
        loop(i,0,n,1){
            cout << score + diff[i] << " ";
        }
        cout << "\n";
    }
}