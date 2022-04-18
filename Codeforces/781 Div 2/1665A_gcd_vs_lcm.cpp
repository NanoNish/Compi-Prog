#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==4)
            cout << 1 << " " << 1 << " " << 1 << " " << 1 << "\n";
        else if(n%4 == 0)
            cout << 2 << " " << n - 6 << " " << 2 << " " << 2 << "\n";
        else if(n%4 == 1)
            cout << (n - 1) / 4 << " " << (n - 1) / 2 << " " << (n - 1) / 4 << " " << 1 << "\n";
        else if(n%4 == 2)
            cout << (n-2) / 2 - 1 << " " << (n-2) / 2 + 1 << " " << 1 << " " << 1 << "\n";
        else
            cout << (n - 2) / 2  << " " << (n - 2) / 2 + 1 << " " << 1 << " " << 1 << "\n";
    }
} 

//1 1, 2 1, 1 2, 2 2