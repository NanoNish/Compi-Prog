#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> arr(n, -2);
        int l0{-1}, l1{-1}, r0{n}, r1{n};
        for (auto i{0}; i < s.length(); i++){
            if(s[i] == '0'){
                l0 = i;
                if(l1 != -1) arr[i] = abs(i - l1);
            }
            else{
                l1 = i;
                if(l0 != -1) arr[i] = abs(i - l0 + 1);
            }
        }
        for (auto i{n - 1}; i >= 0; i--){
            if(s[i] == '0'){
                r0 = i;
                if(r1 == n) continue;
                if(arr[i] == -2)
                    arr[i] = abs(i - r1);
                else
                    arr[i] = min(arr[i], abs(i - r1));
            }
            else {
                r1 = i;
                if(r0 == n) continue;
                if (arr[i] == -2)
                    arr[i] = abs(i - r0 + 1);
                else
                    arr[i] = min(arr[i], abs(i - r0 + 1));
            }
        }
        bool flag{1};
        loop(i,0,n,1){
            if(arr[i] == -2){
                loop(i, 0, n, 1) cout << 0;
                cout << "\n";
                flag = 0;
                break;
            }
        }
        if(!flag) continue;
        loop(i,0,n,1){
            if(k < arr[i])
                cout << 0;
            else{
                if((k-arr[i])&1)
                    cout << 0;
                else
                    cout << 1;
            }
        }
        cout << "\n";
    }
}