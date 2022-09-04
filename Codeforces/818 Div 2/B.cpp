#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, r, c;
        cin >> n >> k >> r >> c;
        int grid[n][n]{};
        grid[r - 1][c - 1] = 1;
        loop(j,1,n/k+1,1){    
            loop(i,0,n,1){
                grid[(r - 1 + j*k + i)%n][(c - 1 + i)%n] = 1;
            }
        }
        loop(i,0,n,1){
            loop(j,0,n,1){
                if(grid[i][j] == 1)
                    cout << "X";
                else
                    cout << ".";
            }
            cout << "\n";
        }
    }
}