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
        string s;
        cin >> s;
        vector<int> vec(1);
        int key{0}, count{1}, depth{0};
        loop(i,0,2*n,1){
            if(s[i] == '('){
                depth++;
                if(depth - vec.back() > 1)
                    count++;
            }
            else{
                depth--;
                if (depth < vec.back()){
                    vec.pop_back();
                }
            }
        }
        cout << count << "\n";
    }
}