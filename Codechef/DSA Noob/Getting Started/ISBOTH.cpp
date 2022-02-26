#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n % 5 == 0 && n % 11 == 0)
        cout << "BOTH";
    else if (n % 5 == 0 || n % 11 == 0)
        cout << "ONE";
    else
        cout << "NONE";
    return 0;
}