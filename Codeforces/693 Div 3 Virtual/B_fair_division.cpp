#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while (t--){
        int n{0}, temp{0}, count_1{0}, count_2{0};
        ll sum;
        cin >> n;
        while(n--){
            cin >> temp;
            if(temp&1)
                count_1++;
            else
                count_2++;
        }
        if(count_1&1){
            cout << "NO\n";
            continue;
        }
        else if ((count_1 == 0) & (count_2 & 1)){
            cout << "NO\n";
            continue;
        }
        else
            cout << "YES\n";
    }
    return 0;
}