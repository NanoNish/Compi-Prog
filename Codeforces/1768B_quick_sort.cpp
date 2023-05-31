#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr[n]{};
        loop(i,0,n,1){
            int tmp;
            cin >> tmp;
            arr[--tmp]=i;
        }
        int ind{n - 1};
        loop(i,0,n-1,1){
            if(arr[i+1] < arr[i]){
                ind = i;
                break;
            }
        }
        cout << (n - 1 - ind + k - 1)/k << "\n";
    }
}