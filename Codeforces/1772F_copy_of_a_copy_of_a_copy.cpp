#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int n, m, k;
    cin >> n >> m >> k;
    bool arr[n][m][k + 1]{};
    loop(cp,0,k+1,1) loop(i, 0, n, 1){
        string tmp;
        cin >> tmp;
        loop(j,0,m,1) arr[i][j][cp] = tmp[j] - 48;
    }
    vector<pair<int, int>> special;
    loop(cp,0,k+1,1){
        int count{0};
        loop(i,1,n-1,1){
            loop(j,1,m-1,1){
                int tmp{arr[i-1][j][cp] + arr[i][j-1][cp] +arr[i+1][j][cp] +arr[i][j+1][cp]};
                if(int(arr[i][j][cp]) + 4 == tmp || int(arr[i][j][cp]) - 1 == tmp)
                    count++;
            }
        }
        special.push_back({count, cp});
    }
    sort(special.begin(), special.end());
    reverse(special.begin(), special.end());
    cout << special.at(0).second + 1 << "\n";
    vector<string> moves;
    loop(move,0,k,1){
        if(special.at(move).first == special.at(move + 1).first){
            string move2{"2 "};
            move2 += to_string(special.at(move + 1).second + 1);
            moves.push_back(move2);
            continue;
        }
        loop(i,1,n-1,1) loop(j,1,m-1,1){
            if(arr[i][j][special.at(move).second] != arr[i][j][special.at(move + 1).second]){
                string move1{"1 "};
                move1 += to_string(i + 1) + " " + to_string(j + 1);
                moves.push_back(move1);
            }
        }
        string move2{"2 "};
        move2 += to_string(special.at(move + 1).second + 1);
        moves.push_back(move2);
    }
    cout << moves.size() << "\n";
    for(auto i: moves)
        cout << i << "\n";
}