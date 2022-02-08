#include <bits/stdc++.h>
using namespace std;

int bin_to_deci(int n){
    int sum{0};
    for (int i{0}; n > 0; i++){
        sum += (n % 10)*(pow(2,i));
        n /= 10;
    }
    return sum;
}

void is_prime(int n){
    if(n<2)
        cout << "No";
    else{
        for (int i{2}; i * i < n;i++){
            if(n%i==0)
                cout << "No";
            else
                cout << "Yes";
        }
    }
}

int main(){
    int n, a;
    cin >> n;
    for (int i{0}; i < n; i++){
        cin >> a;
        is_prime(bin_to_deci(a));
    }
    return 0;
}