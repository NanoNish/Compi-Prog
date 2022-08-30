#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        vector<vector<int>> vec(n);
        loop(i,0,n,1){
            vec[arr[i] - 1].push_back(i);
        }
        loop(i,0,n,1){
            int count{1};
            loop(j,1,vec[i].size(),1){
                if((vec[i][j] - vec[i][j-1]) & 1)
                    count++;
            }
            if(vec[i].size() == 0)
                count = 0;
            cout << count << " ";
        }
        cout << "\n";
    }
}