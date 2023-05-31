#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n+1]{};
    loop(i, 0, m, 1){
        int tmp;
        cin >> tmp;
        arr[tmp]++;
    }
    vector<int> vec;
    int i{0};
    while(++i <= n){
        vec.push_back(i);
        if(arr[i] == 1)
            continue;
        reverse(vec.begin(), vec.end());
      	for(auto j: vec) cout << j << " ";
        vec.clear();
    }
}