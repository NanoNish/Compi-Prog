#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        int arr[n]{};
        loop(i,0,n,1){
            int tmp;
            cin >> tmp;
            mp[tmp] = i;
        }
        for(auto i: mp)
            arr[i.second] = i.first;
        
    }
}