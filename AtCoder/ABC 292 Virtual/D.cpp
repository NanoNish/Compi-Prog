#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<vector<int>> adj;
vector<int> vis;
vector<int> self_loops;
vector<int> comp;

void dfs(int v){
    vis[v] = 1;
    comp.push_back(v);
    for (int u : adj[v]) {
        if (!vis[u])
            dfs(u);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    adj.resize(n);
    vis.resize(n);
    self_loops.resize(n);
    loop(i,0,m,1){
        int u, v;
        cin >> u >> v;
        if(u == v){
            self_loops[u - 1]++;
            continue;
        }
        adj[u - 1].push_back(v - 1);
        adj[v - 1].push_back(u - 1);
    }
    loop(v,0,n,1){
        if (!vis[v]) {
            comp.clear();
            dfs(v);
            //adj may contain duplicates but comp wont so adj has all paths but comp has vertices
            int paths{};
            for(auto u: comp){
                paths += adj[u].size();
                paths += 2 * self_loops[u]; //going to be divided by 2 later
            }
            paths /= 2;
            if(paths != comp.size()){
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
    return 0;
}