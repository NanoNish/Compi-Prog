#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<vector<int>> adj;
vector<int> vis;

void dfs(int u, vector<int> &vec, int root){
    if(u == root && vis[u]){
        vec.push_back(u);
        return;
    }
    if(vis[u])
        return;
    vis[u] = 1;
    for(auto i: adj[u]){
        dfs(i, vec, root);
        if(vec.size()){
            vec.push_back(u);
            break;
        }
    }
}

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        adj.clear();
        adj.resize(n);
        vis.clear();
        vis.resize(n);
        loop(i,0,m,1){
            int u, v;
            cin >> u >> v;
            adj[--u].push_back(--v);
            adj[v].push_back(u);
        }
        bool flag{1};
        loop(i,0,n,1){
            if(!flag)
                break;
            if(adj[i].size() < 4) continue;
            vector<int> vec;
            dfs(i, vec, i);
            if(vec.size() == 0) continue;
            flag = 0;
            sort(adj[i].begin(), adj[i].end());
            loop(j,2,vec.size()-2,1){
                if(binary_search(adj[i].begin(), adj[i].end(), vec[j])){
                    vec.erase(vec.begin()+j+1, vec.end() - 1);
                    break;
                }
            }
            cout << "YES\n";
            cout << vec.size() + 1 << "\n";
            loop(j,0,vec.size()-1, 1){
                cout << vec[j] + 1 << " " << vec[j + 1] + 1 << "\n";
            }
            sort(vec.begin(), vec.end());
            int count{2};
            for(auto j: adj[i]){
                if(count == 0)
                    break;
                if(!binary_search(vec.begin(), vec.end(), j)){
                    count--;
                    cout << i + 1 << " " << j + 1 << "\n";
                }
            }
        }
        if(flag)
            cout << "NO\n";
    }
}