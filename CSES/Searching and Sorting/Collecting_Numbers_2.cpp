#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n]{}, ind[n+2]{};
    loop(i,0,n,1){
        cin >> arr[i];
        ind[arr[i]] = i;
    }
    int count{1};
    loop(i,1,n,1){
        if(ind[i] > ind[i+1])
            count++;
    }
    while(m--){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        set<int> s;
        s.insert(arr[a]);
        s.insert(arr[b]);
        if(arr[a] < n-1)
            s.insert(arr[a] + 1);
        if(arr[b] < n-1)
            s.insert(arr[b] + 1);
        if(arr[a] > 1)
            s.insert(arr[a] - 1);
        if(arr[b] > 1)
            s.insert(arr[b] - 1);
        vector<int> tmp_ind(s.size());
        for(auto &i: s){
            tmp_ind[i] = ind[i];
            if(i == a)
                tmp_ind[i] = b;
            if(i == b)
                tmp_ind[i] = a;
        }
        loop(i,0,tmp_ind.size() - 1,1){
        if(tmp_ind[i] > tmp_ind[i+1])
            count++;
    }

    }
}