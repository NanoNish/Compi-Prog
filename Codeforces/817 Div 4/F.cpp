#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int arr[50][50];

bool check(int a, int b, int n, int m){
    int count{};
    vector<pair<int, int>> vec;
    loop(i,a-1,a+2,1){
        loop(j,b-1,b+2,1){
            if(i >= 0 && i < n && j >= 0 && j < m){
                count++;
                vec.push_back({i, j});
            }
        }
    }
    if(count != 3){
        return false;
    }
    if (check_dist(vec[0], vec[1]) && check_dist(vec[0], vec[2]) && check_dist(vec[1], vec[2]))
        return true;
    else
        return false;
}

bool check_dist(pair<int,int> a, pair<int,int>b){
    if (abs(a.first - b.first) == 1 && abs(a.second - b.second) == 1)
        return true;
    else
        return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        loop(i,0,n,1){
            string tmp;
            cin >> tmp;
            loop(j,0,m,1){
                if(tmp[j] == '*')
                    arr[i][j] = 1;
            }
        }
        bool flag{1};
        loop(i,0,n,1){
            loop(j,0,m,1){
                if(!check(i, j, m, n))
                    flag = 0;    
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
        loop(i,0,50,1) loop(j,0,50,1) arr[i][j] = 0;
    }
}