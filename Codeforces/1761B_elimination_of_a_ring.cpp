#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ind[n + 1]{};
        int arr[n]{};
        loop(i,0,n,1){
            cin >> arr[i];
            ind[arr[i]].push_back(i);
        }
        loop(i,1,n+1,1){
            loop(j,i+1,n+1,1){
                
            }
        }
    }
}