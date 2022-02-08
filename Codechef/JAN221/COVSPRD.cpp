#include <bits/stdc++.h>
using namespace std;

long is_spread(long n, long d);

int main(){
    int t;
    long n, d;
    cin >> t;
    for(int i{0}; i<t; i++){
        cin >> n >> d;
        cout << is_spread(n, d) << endl;
    }
    return 0;
}

long is_spread(long n, long d){
    if(d <= 10)
        if(pow(2, d) >= n)
            return n;
        else
            return pow(2, d);
    else if(n <= pow(2, 10) * pow(3, d - 10))
        return n;
    else
        return pow(2, 10) * pow(3, d - 10);
}