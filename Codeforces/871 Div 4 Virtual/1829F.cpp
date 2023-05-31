#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int arr[n]{};
        loop(i,0,m,1){
            int u, v;
            cin >> u >> v;
            arr[--u]++;
            arr[--v]++;
        }
        map<int, int> mp;
        loop(i, 0, n, 1) mp[arr[i]]++;
        if(mp.size() == 2){
            auto it{mp.begin()};
            cout << (*(++it)).first << " " << (*it).first - 1 << "\n";
        }
        else{
            auto it{mp.begin()};
            it++;
            int x{}, y{};
            if((*it).second == 1){
                x = (*it).first;
                y = (*(++it)).first - 1;
            }
            else{
                y = (*it).first - 1;
                x = (*(++it)).first;
            }
            cout << x << " " << y << "\n";
        }
    }
}