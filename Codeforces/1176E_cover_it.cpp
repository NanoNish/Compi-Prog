#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> L(n + 1);
        vector<int> A(1, 1), B, Q(1,1), vis(n+1,0);
        loop(i,0,m,1){
            int a, b;
            cin >> a >> b;
            L[a].push_back(b);
            L[b].push_back(a);
        }
        int par{0};
        vis[1] = 1;
        while(Q.size()){
            if(par == 0){
                vector<int> tempQ;
                for(auto i: Q){
                    for(auto j: L[i]){
                        if(vis[j])
                            continue;
                        B.push_back(j);
                        tempQ.push_back(j);
                        vis[j] = 1;
                    }
                }
                Q = tempQ;
                par = 1;
            }
            else{
                vector<int> tempQ;
                for(auto i: Q){
                    for(auto j: L[i]){
                        if(vis[j])
                            continue;
                        A.push_back(j);
                        tempQ.push_back(j);
                        vis[j] = 1;
                    }
                }
                Q = tempQ;
                par = 0;
            }
        }
        if(A.size() < B.size()){
            cout << A.size() << "\n";
            for(auto i: A) cout << i << " ";
            cout << "\n";
        }
        else{
            cout << B.size() << "\n";
            for(auto i: B) cout << i << " ";
            cout << "\n";
        }
    }
}