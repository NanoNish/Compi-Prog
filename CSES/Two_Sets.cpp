#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%4 == 1 || n%4 == 2){
        cout << "NO" << "\n";
        return 0;
    }
    vector<int> a, b;
    if(n&1){
        a.push_back(n);
        loop(i,0,n/4,1){
            a.push_back(i + 1);
            a.push_back(n - i - 1);
        }
        loop(i,n/4,n/2,1){
            b.push_back(i + 1);
            b.push_back(n - i - 1);
        }
    }
    else{
        loop(i,0,n/4,1){
            a.push_back(i + 1);
            a.push_back(n - i);
        }
        loop(i, n / 4, n / 2, 1){
            b.push_back(i + 1);
            b.push_back(n - i);
        }
    }
    cout << "YES\n";
    cout << a.size() << "\n";
    for(auto i:a)
        cout << i << " ";
    cout << "\n" << b.size() << "\n";
    for(auto i:b){
        cout << i << " ";
    }
}