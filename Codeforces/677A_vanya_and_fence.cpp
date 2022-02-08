#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n{0}, h{0}, temp{0}, count{0};
    cin >> n >> h;
    for (int i{0}; i < n; i++){
        cin >> temp;
        if(temp > h)
            count++;
        count++;
    }
    cout << count;
}