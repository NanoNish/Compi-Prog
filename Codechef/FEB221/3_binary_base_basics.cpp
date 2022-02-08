#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i{0}; i < t; i++){
        int n, k, count{0};
        cin >> n >> k;
        string s;
        cin >> s;
        for (int j{0}; j < n / 2; j++){
            if(s[j] != s[n-1-j])
                count++;
        }
        cout << ((count <= k) && (n % 2 == 1 || (k - count) % 2 == 0) ? "YES" : "NO") << endl;
    }
    return 0;
}