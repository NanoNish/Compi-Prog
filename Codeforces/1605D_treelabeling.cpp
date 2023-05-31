#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<int> msb(100005);
vector<vector<int>> adj;
vector<int> vis;

void init(){
    int x{2}, cnt{1};
    loop(i,1,100005,1){
        if(i == x){
            cnt++;
            x = x << 1;
        }
        msb[i] = cnt;
    }
}

void dfs(int v, int c){
    if(vis[v])
        return;
    vis[v] = c;
    for(auto &i: adj[v])
        dfs(i, (c == 1 ? 2 : 1));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        adj.clear();
        vis.clear();
        adj.resize(n);
        vis.resize(n);
        loop(i,0,n-1,1){
            int u, v;
            cin >> u >> v;
            adj[u-1].push_back(v-1);
            adj[v-1].push_back(u-1);
        }
        dfs(0, 1);
        int count{};
        loop(i, 0, n, 1) if (vis[i] == 1) count++;
        int one[18]{};
        int ind{1};
        while(count > 0){
            if(count&1)
                one[ind] = 1;
            ind++;
            count >>= 1;
        }
        vector<int> top, bottom;
        loop(i,1,n+1,1){
            if(one[msb[i]])
                top.push_back(i);
            else
                bottom.push_back(i);
        }
        auto it1{top.begin()}, it2{bottom.begin()};
        loop(i,0,n,1){
            if(vis[i] == 1){
                cout << *it1 << " ";
                it1++;
            }
            else{
                cout << *it2 << " ";
                it2++;
            }
        }
        cout << "\n";
    }
}
