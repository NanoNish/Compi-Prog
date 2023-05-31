#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    loop(i,0,n,1){
        loop(j, 0, i, 1) arr[i].push_back(-1);
        loop(j,0,n-i,1){    
            int tmp;
            cin >> tmp;
            arr[i].push_back(tmp);
        }
    }

    bool flag{0};
    loop(i,0,n,1){
        if(arr[i][i] == 2){
            flag = 1;
            break;
        }
        bool flag_2{0};
        loop(j,i,n,1){
            if(arr[i][j] == 2)
                flag_2 = 1;
            if(flag_2 && arr[i][j] == 1){
                flag = 1;
                break;
            }
            if(flag == 1)
                break;
        }
    }
    if(flag){
        cout << 0;
        return 0;
    }

    vector<int> vec(n, -1), ans(n, 0);
    loop(i,0,n,1){
        int last1{-1};
        loop(j,i+1,n,1){
            if(arr[i][j] == 1)
                last1 = j;
        }
        loop(k, i, last1, 1) vec[k] = 1;
    }
    ans[0] = 2;
    
}