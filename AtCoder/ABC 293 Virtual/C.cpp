#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<vector<int>> arr;
int h, w;

int dfs(int i, int j, set<int> s){
    if(i >= h || j >= w)
        return 0;
    if(s.find(arr[i][j]) != s.end()){
        return 0;
    }
    if(i == h-1 && j == w-1)
        return 1;
    s.insert(arr[i][j]);
    int ans{};
    return dfs(i + 1, j, s) + dfs(i, j + 1, s);
}

int main(){
    // int h, w;
    cin >> h >> w;
    arr.resize(h);
    loop(i,0,h,1) loop(j,0,w,1) {
        int tmp;
        cin >> tmp;
        arr[i].push_back(tmp);
    }
    set<int> s;
    cout << dfs(0, 0, s);
}