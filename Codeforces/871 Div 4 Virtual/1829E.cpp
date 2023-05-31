#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int n, m;
vector<vector<int>> vec;
vector<vector<int>> vis;

int dfs(int x, int y){
    if(x >= n || x < 0 || y >= m || y < 0)
        return 0;
    if(vis[x][y])
        return 0;
    vis[x][y] = 1;
    if(vec[x][y] == 0)
        return 0;
    return vec[x][y] + dfs(x+1, y) + dfs(x-1, y) + dfs(x, y+1) + dfs(x, y-1);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vec.clear();
        vis.clear();
        vec.resize(n, vector<int>(m));
        vis.resize(n, vector<int>(m));
        loop(i, 0, n, 1) loop(j, 0, m, 1) cin >> vec[i][j];
        int ans{};
        loop(i, 0, n, 1) loop(j, 0, m, 1){
            ans = max(ans, dfs(i, j));
        }
        cout << ans << "\n";
    }
}