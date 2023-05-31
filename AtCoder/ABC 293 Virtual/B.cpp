#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n], vis[n]{};
    loop(i, 0, n, 1) cin >> arr[i];
    loop(i,0,n,1){
        if(!vis[i]){
            vis[arr[i]-1] = 1;
        }
    }
    vector<int> vec;
    loop(i,0,n,1){
        if(!vis[i]){
            vec.push_back(i + 1);
        }
    }
    cout << vec.size() << "\n";
    for(auto i: vec)
        cout << i << " ";
}