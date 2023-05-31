#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    loop(i, 0, n, 1) cin >> arr[i];
    int mx{arr[0]}, ind{n};
    bool flag{0};
    loop(i,0,n-1,1){
        if(arr[i+1] < arr[i]){
            ind = i;
            break;
        }
    }
    loop(i,ind,n-1,1){
        if(arr[i+1] > arr[i]){
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << "NO\n";
    else
        cout << "YES\n";
}