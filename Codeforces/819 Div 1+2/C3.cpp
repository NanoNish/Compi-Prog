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
        int n, depth{0};
        cin >> n;
        string s;
        cin >> s;
        vector<int> vec;
        loop(i,0,2*n,1){
            if(s[i] == '('){
                depth++;
                vec.push_back(depth);
            }
            else {
                depth--;
            }
        }
        int count{1};
        loop(i,1,n,1){
            if(vec[i] > vec[i-1])
                count++;
        }
        cout << count << "\n";
    }
}