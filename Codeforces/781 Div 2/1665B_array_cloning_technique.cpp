#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        map<int, int> m;
        int arr[n];
        loop(i, 0, n, 1){
            cin >> arr[i];
            m[arr[i]]++;
        }
        int mx{0}, mx_i{0};
        for (auto &i : m){
            if (i.second >= mx){
                mx = i.second;
                mx_i = i.first;
            }
        }
        int count{n-mx};
        while(mx < n){
            count++;
            mx = mx * 2;
        }
        cout << count << "\n";
    }
}