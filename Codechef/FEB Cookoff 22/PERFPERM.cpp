#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if((n&1 && k&1) || (!(n&1) && !(k&1))){
            loop(i, 1, n + 1, 1){
                if(i < k + 1) cout << i << " ";
                else
                    cout << i + 1 << " " << i++ << " ";
            }
            cout << endl;
        }
        else {
            cout << n << " ";
            loop(i, 2, k + 1, 1) cout << i << " ";
            loop(i, k + 1, n, 2){
                cout << i + 1 << " " << i << " ";
            }
            cout << 1 << endl;
        }
    }
    return 0;
}

// odd odd   : 1 2 3 .. then 7 6 9 8 -- 9 5 -- 1 2 3 4 5 7 6 9 8
// odd even  : 9 2 3 .. then 7 6 1 8 -- 9 4 -- 9 2 3 4 6 5 8 7 1
// even odd  : -- 8 5 -- 8 2 3 4 5 7 6 1
// even even : -- 8 4 -- 1 2 3 4 6 5 8 7