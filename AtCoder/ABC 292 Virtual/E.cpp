#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<vector<int>> adj;
vector<int> vis;
vector<int> comp;

void dfs(int v){
    if(vis[v])
        return;
    // cout << v+1 << " ";
    vis[v] = 1;
    comp.push_back(v);
    for(auto &u: adj[v])
        dfs(u);
    return;
}

int main(){
    FAST
    int n, m;
    cin >> n >> m;
    adj.resize(n);
    vis.resize(n);
    loop(i,0,m,1){
        int u, v;
        cin >> u >> v;
        adj[u - 1].push_back(v - 1);
    }
    ll count{};
    loop(i,0,n,1){
        vis.clear();
        vis.resize(n);
        comp.clear();
        // cout << i+1 << ": ";
        dfs(i);
        // cout << "\n";
        count += comp.size() - adj[i].size() - 1;
    }
    cout << count;
}