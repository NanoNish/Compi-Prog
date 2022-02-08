#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n{0}, p{0}, q{0}, count{0};
    cin >> n;
    for (int i{0}; i < n; i++){
        cin >> p >> q;
        if (p + 2 <= q)
            count++;
    }
    cout << count;
}