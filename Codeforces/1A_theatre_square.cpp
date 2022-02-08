#include <iostream>
using namespace std;

int main(){
    long n,m,a;
    long long k,l;
    cin >> n >> m >> a;
    if(n%a != 0){
        k = long(n/a) + 1;
    }
    else {
        k = n/a;
    }
    if(m%a != 0){
        l = long(m/a) + 1;
    }
    else {
        l = m/a;
    }
    long long x = k*l;
    cout << x;
}