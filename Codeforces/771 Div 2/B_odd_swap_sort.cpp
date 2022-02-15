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
        int arr[n];
        vector<int> odd(0), even(0);
        loop(i, 0, n, 1){
            cin >> arr[i];
            if(arr[i]&1)
                odd.push_back(arr[i]);
            else
                even.push_back(arr[i]);
        }
        vector<int> odd_sort = odd, even_sort = even;
        sort(odd_sort.begin(), odd_sort.end());
        sort(even_sort.begin(), even_sort.end());
        bool flag{0};
        loop(i, 0, odd_sort.size(), 1) 
            if (odd_sort.at(i) != odd.at(i))
                flag = 1;
        loop(i, 0, even_sort.size(), 1) 
            if (even_sort.at(i) != even.at(i))
                flag = 1;
        if(flag){
            cout << "No" << endl;
            continue;
        }
        else
            cout << "Yes" << endl;
    }
    return 0;
}