#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n, a, b, c, max{1};
    cin >> n >> a >> b >> c;
    loop(i, 0, n / a + 1, 1){
        loop(j, 0, n / b + 1, 1){
            int x{n - i * a - j * b};
            if(x >= 0 && x % c==0) if(max < i + j +x / c)
                    max = i + j + x / c;
        }
    }
    cout << max;
}