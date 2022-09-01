#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    char grid[h][w]{};
    bool marked[h][w]{};
    loop(i,0,h,1){
        string s;
        cin >> s;
        loop(j,0,w,1){
            grid[i][j] = s[j];
        }
    }
    int a{0}, b{0};
    bool flag{0};
    while(marked[a][b] == 0){
        marked[a][b] = 1;
        if(grid[a][b] == 'U'){
            if(a == 0) flag = 1;
            else a -= 1;
        }
        if(grid[a][b] == 'D'){
            if(a == h-1) flag = 1;
            else a += 1;
        }
        if(grid[a][b] == 'L'){
            if(b == 0) flag = 1;
            else b -= 1;
        }
        if(grid[a][b] == 'R'){
            if(b == w-1) flag = 1;
            else b += 1;
        }
    }
    if(flag)
        cout << -1;
    else
        cout << a + 1 << " " << b + 1;
}