#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k[n], h[n];
    int cum_h{0}, cum_sum{0};
    for (int i{0}; i < n; i++){
        cin >> k[i] >> h[i];
        cum_h += h[i];
    }
    int d{1};
    do
    {
        cum_sum = d++;
    } while (cum_sum < cum_h);
    cout << cum_sum;
}