#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, c;
    cin >> n >> m >> c;
    int a[n], b[m];
    for (int i{0}; i < n; i++)
        cin >> a[i];
    for (int i{0}; i < m; i++)
        cin >> b[i];
    for (int i{0}; i < n - m + 1; i++)
        for (int j{i}; j < n && j-i < m; j++)
            a[j] += b[j - i];
    for (int i{0}; i < n; i++)
        cout << a[i] % c << " ";
}