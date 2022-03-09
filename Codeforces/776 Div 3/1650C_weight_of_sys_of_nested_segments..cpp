#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

//this part of sortbysec is from GFG
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b){
    return (a.second < b.second);
}

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        vector<pair<int,int>> one(0);
        map<int, int> two;
        loop(i,0,n,1){
            int tmp1, tmp2;
            cin >> tmp1 >> tmp2;
            one.push_back(make_pair(tmp2, tmp1));
            two.insert(pair<int,int>(tmp1, i+1));
        }
        sort(one.begin(), one.end());
        loop(i, 2 * m, n, 1){
            one.pop_back();
        }
        sort(one.begin(), one.end(), sortbysec);
        ll sum{0};
        loop(i,0,2*m,1){
            sum += one.at(i).first;
        }
        cout << sum << "\n";
        int a{0}, b{n-1};
        loop(i,0,m,1){
            cout << two[one.at(i).second] << " " << two[one.at(2 * m - 1 - i).second] << "\n";
        }
        cout << endl;
    }
    return 0;
}