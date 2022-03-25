#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n], brr[n];
        vector<pair<int, int>> vec(0);
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i, 0, n, 1) cin >> brr[i];
        loop(i, 0, n, 1) vec.push_back({arr[i], brr[i]});
        sort(vec.begin(), vec.end());
        int count{0};
        loop(i, 0, n, 1){
            loop(j, i + 1, n, 1){
                if (vec.at(i).second < vec.at(j).second && vec.at(i).first < vec.at(j).first){
                    count++;
                    break;
                }
            }
        }
        cout << n - count << "\n";
    }
}