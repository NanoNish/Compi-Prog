#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n, m, edges{0}, tmp;
    ll price{0};
    cin >> n >> m;
    int arr[n];
    loop(i, 0, n, 1){
        cin >> arr[i];
        price += arr[i];
    }
    edges = m;
    price -= (n * (n - 1)) / 2;
    loop(i, 0, m, 1) cin >> tmp >> tmp;
    int q{0};
    cin >> q;
    loop(i, 0, q, 1){
        char c;
        cin >> c;
        if(c == '+'){
            edges++;
            cin >> tmp >> tmp;
        }
        else if (c == '-'){
            edges--;
            cin >> tmp >> tmp;
        }
        else{
            cout << max((ll)0, price + 2 * edges) << "\n";
        }
    }
}

// int main(){
//     int n, m;
//     cin >> n >> m;
//     vector<int> adj[n];
//     int arr[n];
//     loop(i, 0, n, 1) cin >> arr[i];
//     loop(i, 0, m, 1){
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     int q;
//     cin >> q;
//     loop(i, 0, q, 1){
//         char c;
//         cin >> c;
//         if(c == '+'){
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         else if(c == '-'){
//             int u, v;
//             cin >> u >> v;
//             auto it = find(adj[u].begin(), adj[u].end(), v);
//             if(it != adj[u].end()) adj[u].erase(it);
//             it = find(adj[v].begin(), adj[v].end(), u);
//             if(it != adj[v].end()) adj[v].erase(it);
//         }
//         else{}

//     }
// }