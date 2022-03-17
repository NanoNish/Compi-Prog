#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0};
        cin >> n;
        int arr[n], brr[n];
        ll sum_a{0}, sum_b{0};
        loop(i, 0, n, 1){
            cin >> arr[i];
            sum_a += arr[i];
        }
        loop(i, 0, n, 1){
            cin >> brr[i];
            sum_b += brr[i];
        }
        if(sum_a != sum_b){
            cout << -1 << "\n";
            continue;
        }
        vector<int> a_ans(0), b_ans(0);
        ll count{0};
        loop(i, 0, n, 1){
            if(arr[i] > brr[i]){
                loop(j, 0, arr[i] - brr[i], 1) a_ans.push_back(i+1);
                count += arr[i] - brr[i];
            }
            if (arr[i] < brr[i]){
                loop(j, 0, brr[i] - arr[i], 1) b_ans.push_back(i+1);
            }
        }
        cout << count << "\n";
        loop(i, 0, count, 1){
            cout << a_ans.at(i) << " " << b_ans.at(i) << "\n";
        }
    }
}