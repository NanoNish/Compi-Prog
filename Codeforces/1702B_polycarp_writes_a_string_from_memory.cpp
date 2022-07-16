#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        size_t i{0};
        int count{0};
        while(i < s.size()){
            count++;
            set<char> x;
            while(x.size() <= 3){
                x.insert(s[i]);
                i++;
                if(x.size() == 4)
                    i--;
            }
        }
        cout << count << "\n";
    }
}