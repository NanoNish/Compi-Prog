#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        ll a{arr[0]}, b{0}, a_this{arr[0]}, b_this{0};
        int moves{1};
        bool flag{0};
        for (int i{1}, j{n - 1}; i <= j;){
            moves++;
            if(flag){
                while (a_this <= b_this && i <= j){
                    a += arr[i];
                    a_this += arr[i];
                    i++;
                }    
                flag = 0;
                b_this = 0;
                
            }
            else{
                while (b_this <= a_this && i <= j){
                    b += arr[j];
                    b_this += arr[j];
                    j--;
                }
                flag = 1;
                a_this = 0;
            }
        }
        cout << moves << " " << a << " " << b << "\n";
    }
    return 0;
}