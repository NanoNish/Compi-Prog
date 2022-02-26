#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> vec;
    for (int i{1}; i * i <= n; i++)
        if (n % i == 0){
            vec.insert(i);
            vec.insert(n / i);
        }
    cout << vec.size() << "\n";
    for(auto i : vec)
        cout << i << " ";
    return 0;
}