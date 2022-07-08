#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> arr(n), brr(n);
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i, 0, n, 1) cin >> brr[i];
        vector<pair<int, int>> vec;
        loop(i, 0, n, 1){
            loop(j, i + 1, n, 1){
                if (arr[i] >= arr[j] && brr[i] >= brr[j]){
                    vec.push_back({i + 1, j + 1});
                    swap(arr[i], arr[j]);
                    swap(brr[i], brr[j]);
                }
            }
        }
        vector<int> arr_sort{arr}, brr_sort{brr};
        sort(arr_sort.begin(), arr_sort.end());
        sort(brr_sort.begin(), brr_sort.end());
        bool flag{0};
        loop(i, 0, n, 1){
            if (arr[i] != arr_sort[i] || brr[i] != brr_sort[i]){
                flag = -1;
                break;
            }
        }
        if (flag){
            cout << -1 << "\n";
            continue;
        }
        cout << vec.size() << "\n";
        for (auto i : vec){
            cout << i.second << " " << i.first << "\n";
        }
    }
}