#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n{0}, temp{0};
    cin >> n;
    int arr[n];
    for (int i{0}; i < n; i++){
        cin >> temp;
        arr[temp-1] = i+1;
    }
    for (int i{0}; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}