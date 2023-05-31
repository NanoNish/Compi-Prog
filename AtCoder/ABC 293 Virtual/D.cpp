#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<vector<int>> adj;
vector<int> vis;
vector<int> deg;
vector<int> comp;
int count{};

void dfs(int v){
    if(vis[v])
        return;
    vis[v] = 1;
    ::count += deg[v];
    comp.push_back(v);
    for(auto &u: adj[v]){
        dfs(u);
    }
}

int main(){
    FAST
    int n, m;
    cin >> n >> m;
    adj.resize(n);
    vis.resize(n);
    deg.resize(n);
    loop(i,0,m,1){
        int u, v;
        char c;
        cin >> u >> c >> v >> c;
        adj[u - 1].push_back(v - 1);
        adj[v - 1].push_back(u - 1);
        deg[u - 1]++;
        deg[v - 1]++;
    }
    int comps{}, noice_comp{};
    loop(i,0,n,1){
        if(!vis[i]){
            comp.clear();
            ::count = 0;
            comps++;
            dfs(i);
            if(::count == 2*comp.size()){
                noice_comp++;
            }
        }
    }
    cout << noice_comp << " " << comps - noice_comp;
}