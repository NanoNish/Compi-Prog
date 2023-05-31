#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> b(n), a;
        loop(i, 0, n, 1) cin >> b[i];
        vector<int> vec(100007, 0), vec_count(100007, 0);
        map<int, int> b_count;
        loop(i,0,n,1) b_count[b[i]]++;
        bool flag{0};
        for(auto i: b_count){
            if(i.first > n || i.second % i.first != 0){
                cout << -1 << "\n";
                flag = 1;
                break;
            }
        }
        if(flag) continue;
        int counter{1};
        loop(i,0,n,1){
            if(vec_count[b[i]] == 0){
                vec[b[i]] = counter;
                vec_count[b[i]] = b[i] - 1;
                a.push_back(counter);
                counter++;
            }
            else{
                a.push_back(vec[b[i]]);
                vec_count[b[i]]--;
            }
        }
        for(auto i: a)
            cout << i << " ";
        cout << "\n";
    }
}