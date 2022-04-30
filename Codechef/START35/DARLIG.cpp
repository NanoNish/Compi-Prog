#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k==0){
            if(n%4 == 0)
                cout << "Off\n";
            else
                cout << "On\n";
        }
        else{
            if(n%4==0)
                cout << "On\n";
            else
                cout << "Ambiguous\n";
        }
    }
}