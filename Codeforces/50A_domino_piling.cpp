#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    if(m%2 == 0)
        cout << (m / 2) * n;
    else if(n%2 == 0)
        cout << (n / 2) * m;
    else
        cout << (((m - 1) / 2) * n) + ((n - 1) / 2);
}