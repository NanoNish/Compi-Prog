//missing cases
#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0};
        cin >> n;
        string aa, bb;
        cin >> aa >> bb;
        char a[n], b[n];
        loop(i, 0, n, 1){
            a[i] = aa[i];
            b[i] = bb[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        reverse(b, b + n);
        loop(i, 0, n, 1){
            cout << a[i] << b[i];
        }
        cout << endl;
    }
    return 0;
}