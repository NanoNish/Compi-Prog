#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    int tmp{n};
    while(1){
        loop(i,0,tmp,1){
            int tmp1;
            cin >> tmp1;
            arr.at(n - tmp).push_back(tmp1);
        }
        tmp--;
        if(tmp == 0)
            break;
    }
    // Checking for cases of 0
    bool flag{0};
    for(auto vec: arr){
        if(vec.at(0)==2){
            flag = 1;
            break;
        }
        bool flag_2{0};
        loop(i,0,vec.size(),1){
            if(vec.at(i) == 2)
                flag_2 = 1;
            if(flag_2 && vec.at(i) == 1){
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
    vector<int> vec(n, 0);
    vec.at(0) = 2;
    loop(i,0,n,1){
        int x = vec.at(i);
        loop(j,1,arr[i].size(),1){
            if(arr[i][j] == 0){
                vec.at(i + j) = 2 * vec.at(i + j - 1);
            }
            if(arr[i][j] == 1){
                loop(k, i, j + i, 1) vec.at(k) = x;
            }
            if(arr[i][j] == 2){
                vec.at(i + j) = 2 * vec.at(i + j - 1) - 2;
            }
        }
    }
    cout << vec.at(n - 1) << "\n";
}