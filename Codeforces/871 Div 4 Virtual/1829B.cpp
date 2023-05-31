#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans{}, count{};
        loop(i,0,n,1){
            int tmp;
            cin >> tmp;
            if(tmp == 0){
                count++;
            }
            else{
                ans = max(ans, count);
                count = 0;
            }
        }
        ans = max(ans, count);
        cout << ans << "\n";
    }
}