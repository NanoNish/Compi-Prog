#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

pair<int,int> counting(vector<int> child_list[], int node, bool marked_array[], string &colors){
    if(child_list[node].size() == 0){
        return (colors[node - 1] == 'B' ? make_pair(1, 0) : make_pair(0, 1));
    }
    else {
        pair<int, int> count{make_pair(0, 0)};
        loop(i,0,child_list[node].size(),1){
            pair<int, int> tmp = counting(child_list, child_list[node].at(i), marked_array, colors);
            count.first += tmp.first;
            count.second += tmp.second;
        }
        return count;
    } 
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> child_list[n + 1]{};
        loop(i,1,n,1){
            int tmp;
            cin >> tmp;
            child_list[tmp].push_back(i + 1);
        }
        string colors;
        cin >> colors;
        bool marked_array[n + 1]{};
        pair<int, int> count_bw[n + 1]{};
    }
}