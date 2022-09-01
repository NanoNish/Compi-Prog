#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        map<string, vector<int>> m;
        loop(i,0,n,1){
            string tmp;
            cin >> tmp;
            m[tmp].push_back(1);
        }
        loop(i,0,n,1){
            string tmp;
            cin >> tmp;
            m[tmp].push_back(2);
        }
        loop(i,0,n,1){
            string tmp;
            cin >> tmp;
            m[tmp].push_back(3);
        }
        map<int,int> score;
        for(auto i: m){
            if(i.second.size()==1)
                score[i.second[0]] += 3;
            else if(i.second.size() == 2){
                score[i.second[0]] += 1;
                score[i.second[1]] += 1;
            }
        }
        cout << score[1] << " " << score[2] << " " << score[3] << "\n";
    }
}