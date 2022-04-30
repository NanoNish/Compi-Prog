#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==2 || n==3){
        cout << "NO SOLUTION";
        return 0;
    }
    loop(i, 2, n + 1, 2) cout << i << " ";
    loop(i, 1, n + 1, 2) cout << i << " ";
    return 0;   
}