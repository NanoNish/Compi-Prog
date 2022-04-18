#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int arr[26]{}, check_arr[26]{};
        loop(i, 0, b.length(), 1) arr[b[i] - 65]++;
        loop(i, 0, a.length(), 1) check_arr[a[i] - 65]++;
        bool flag{0};
        loop(i, 0, 26, 1){
            if(arr[i] > check_arr[i]){
                cout << "NO\n";
                flag = 1;
                break;
            }
        }
        if(flag)
            continue;
        int ptr_a{a.length() - 1}, ptr_b{b.length() - 1};
        for (auto i{ptr_b}; i >= 0; i--){
            if(b[ptr_b] == a[ptr_a]){
                arr[b[ptr_b] - 65]--;
                ptr_b--;
                ptr_a--;
            }
            else if(arr[a[ptr_a]] != 0)
        }
    }
}