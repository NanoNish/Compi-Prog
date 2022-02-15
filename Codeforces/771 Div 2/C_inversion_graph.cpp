#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0}, temp{0}, mx{0}, count{0};
        cin >> n;
        loop(i, 0, n, 1){
            cin >> temp;
            if(temp > mx)
                mx = temp;
            if(mx == i+1)
                count++;
        }
        cout << count << endl;
    }
}