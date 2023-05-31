#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n, mx{0};
    cin >> n;
    int arr[n]{};
    loop(i,0,n,1){
        int tmp;
        // cin >> tmp;
        // arr[tmp-1] = i;
        cin >> arr[i];
    }
    int count{1};
    loop(i,0,n-1,1){
        if(arr[i] > arr[i+1])
            count++;
    }
    cout << count;
}