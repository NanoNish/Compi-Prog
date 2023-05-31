#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, sx, sy, ex, ey;
string dir, fin;

inline void move(int &x, int &y, string &dir){
    if(dir == "DL"){
        x -= 1;
        y += 1;
    }
    if(dir == "DR"){
        x += 1;
        y += 1;
    }
    if(dir == "UL"){
        x -= 1;
        y -= 1;
    }
    if(dir == "UR"){
        x += 1;
        y -= 1;
    }
}

inline bool corner(int &x, int &y, string &dir){
    if (dir == "DL"){
        x += 2;
        y -= 2;
        dir = "UR";
        if(x-1 == sx && y+1 == sy) return true;
    }
    else if (dir == "DR"){
        x -= 2;
        y -= 2;
        dir = "UL";
        if(x+1 == sx && y+1 == sy) return true;
    }
    else if (dir == "UL"){
        x += 2;
        y += 2;
        dir = "DR";
        if(x-1 == sx && y-1 == sy) return true;
    }
    else if (dir == "UR"){
        x -= 2;
        y += 2;
        dir = "DL";
        if(x+1 == sx && y-1 == sy) return true;
    }
    return false;
}

inline bool side(int &x, int &y, string &dir){
    if(x == 0){
        x += 2;
        dir[1] = 'R';
        if(x - 1 == sx && y == sy)
            return true;
    }
    else if(x == m + 1){
        x -= 2;
        dir[1] = 'L';
        if(x + 1 == sx && y == sy)
            return true;
    }
    else if(y == 0){
        y += 2;
        dir[0] = 'D';
        if(x  == sx && y - 1 == sy)
            return true;
    }
    else if(y == n + 1){
        y -= 2;
        dir[0] = 'U';
        if(x == sx && y + 1 == sy)
            return true;
    }
    return false;
}

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> sy >> sx >> ey >> ex >> dir;
        fin = dir;
        int vis[m+2][n+2]{};
        // vis[sx][sy] = 1;
        int x{sx}, y{sy};
        if(sx == ex && sy == ey){
            cout << 0 << "\n";
            continue;
        }
        int count{};
        int moves{0};
        while(true && moves < n * m + 1){
            move(x, y, dir);
            moves++;
            if((x == 0 || x == m+1) && (y == 0 || y == n+1)){
                count++;
                if(corner(x, y, dir)) if(vis[sx][sy]) break;
            }
            else if((x == 0 || x == m+1) || (y == 0 || y == n+1)){
                count++;
                if(side(x, y, dir)) if(vis[sx][sy]) break;
            }
            // cout << moves << " " << x << " " << y << "\n";
            vis[x][y]++;
            if(x == ex && y == ey)
                break;
            if(x == sx && y == sy && dir == fin)
                break;
        }
        if(vis[ex][ey])
            cout << count << "\n";
        else
            cout << "-1\n";
    }
}