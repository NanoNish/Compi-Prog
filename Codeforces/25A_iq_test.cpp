#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n{0}, temp, count_1{0}, odd{n}, even{n};
    cin >> n;
    loop(i, 0, n, 1){
        cin >> temp;
        if(temp & 1){
            count_1++;
            odd = i;
        }
        else
            even = i;
    }
    if(count_1 == 1)
        cout << odd + 1;
    else
        cout << even + 1;
    return 0;
}