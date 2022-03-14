/*
eve eve n-k+1 k-1 times 1
eve odd 6 3 2 2 4
odd eve -1
odd odd 1 (n-1)-(k-1)+1 (k-1)-1 times 1
*/

#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n, k;
        bool flag{1};
        cin >> n >> k;
        if(k==1){
            cout << "YES\n" << n << endl;
            continue;
        }
        if(n&1 && !(k&1)){
            cout << "NO\n";
            continue;
        }
        if(n&1 && k&1){
            if(n - k + 1 <= 0)
                cout << "NO\n";
            else{
                cout << "YES\n" << 1 << " ";
                n--;
                k--;
                flag = 0;
            }
        }
        if(!(n&1) && !(k&1)){
            if (n - k + 1 <= 0)
                cout << "NO\n";
            else{
                if (flag)
                    cout << "YES\n";
                cout << n - k + 1 << " ";
                loop(i, 0, k - 1, 1) cout << 1 << " ";
                cout << endl;
            }
        }
        if(!(n&1) && k&1){
            if(n < 2*k)
                cout << "NO\n";
            else{
                cout << "YES\n";
                cout << n - 2 * (k - 1) << " ";
                loop(i, 0, k - 1, 1) cout << 2 << " ";
                cout << endl;
            }
        }
    }
}