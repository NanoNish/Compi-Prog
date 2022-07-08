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
        vector<int> arr(n), brr(n);
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i, 0, n, 1) cin >> brr[i];
        vector<int> arr_sort{arr}, brr_sort{brr};
        sort(arr_sort.begin(), arr_sort.end());
        sort(brr_sort.begin(), brr_sort.end());
        vector<int> s;
        bool flag{0};
        loop(i,0,n,1){
            if(arr[i] != arr_sort[i] || brr[i] != brr_sort[i]){
                if (arr[i] != arr_sort[i] && brr[i] != brr_sort[i])
                    s.push_back(i + 1);
                else{
                    cout << -1 << "\n";
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)
            continue;
        sort(s.begin(), s.end());
        vector<pair<int, int>> vec;
        while(s.size() > 0){
            vec.push_back(make_pair(s.at(0), s.at(1)));
            s.erase(s.begin());
        }
        cout << vec.size() << "\n";
        for(auto i: vec){
            cout << i.second << " " << i.first << "\n";
        }
    }
}