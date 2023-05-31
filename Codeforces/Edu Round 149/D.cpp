#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[n]{};
        int tmp{0}, cnt{0};
        int x1{}, x2{};
        loop(i, 0, n, 1){
            if (s[i] == '(') 
                x1++;
            else 
                x2++;
        }
        if(x1 != x2){
            cout << -1 << "\n";
            continue;
        }
        loop(i,0,n,1){
            if(s[i] == '(')
                tmp++;
            else
                tmp--;
            if(tmp < 0){
                arr[i] = 1;
                cnt++;
                tmp = 0;
            }
        }
        bool flag1{}, flag2{};
        loop(i,0,n,1){
            if(arr[i] == 1)
                flag2 = 1;
            else
                flag1 = 1;
        }
        cout << (flag1 && flag2 ? 2 : 1) << "\n";
        reverse(s.begin(), s.end());
        loop(i,0,n,1){
            if(cnt == 0)
                break;
            if(s[i] == '('){
                arr[n - 1 - i] = 1;
                cnt--;
            }
        }
        loop(i, 0, n, 1) cout << arr[i] + 1 << " ";
        cout << "\n";
    }
}