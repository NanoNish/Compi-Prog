#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        string input;
        bool board[n][m]{};
        int count_B{0};
        for (int j{0}; j < n; j++){
            cin >> input;
            for (int k{0}; k < m; k++){
                if(input[k] == 'B'){
                    board[j][k] = 0;
                    count_B++;
                }
                if (input[k] == 'W')
                    board[j][k] = 1;
            }
        }           
        if(count_B == 0){
            cout << -1 << endl;
            continue;
        }
        if(board[r-1][c-1] == 0){
            cout << 0 << endl;
            continue;
        }
        bool flag{true};
        for (int j{0}; j < n; j++){
            if(board[j][c-1] == 0){
                cout << 1 << endl;
                flag = false;
                break;
            }
        }
        if(flag == false)
            continue;
        for (int j{0}; j < m; j++){
            if (board[r-1][j] == 0){
                cout << 1 << endl;
                flag = false;
                break;
            }
        }
        if(flag == false)
            continue;
        cout << 2 << endl;
    }
}