#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<vector<int>> adj;
queue<pair<int, int>> que;
vector<int> vis;
vector<vector<string>> path;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int col[n]{};
        loop(i, 0, n, 1) cin >> col[i];
        adj.clear();
        adj.resize(n);
        vis.clear();
        vis.resize(n);
        path.clear();
        path.resize(n);
        loop(i,0,m,1){
            int u, v;
            cin >> u >> v;
            adj[u - 1].push_back(v - 1);
            adj[v - 1].push_back(u - 1);
        }
        que.push({0, 0});
        while(que.size()){
            int ver = que.front().first;
            int dist = que.front().second;
            que.pop();
            if(vis[ver] = 1) continue;
            for(auto &i: adj[ver])
                que.push({i, dist + 1});
        }
    }
}