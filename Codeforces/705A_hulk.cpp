#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n{0};
    cin >> n;
    for (int i{0}; i < n; i++){
        if(i&1)
            cout << "I love ";
        else
            cout << "I hate ";
        if (i + 1 < n)
            cout << "that ";
    }
    cout << "it";
}