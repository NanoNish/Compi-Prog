#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if(float(b / m) >= float(a)){
        cout << n * a;
        return 0;
    }
    int ans1 = (n / m) * b + (n % m) * a;
    int ans2 = ((n / m) + 1) * b;
    cout << (ans1 <= ans2 ? ans1 : ans2);
    return 0;
}