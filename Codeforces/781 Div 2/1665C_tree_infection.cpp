#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        set<int, greater<int>> s;
        map<int, int> m;
        int arr[n-1], brr[n+1]{};
        brr[0] = 1;
        s.insert(0);
        loop(i, 0, n-1, 1){
            cin >> arr[i];
            s.insert(arr[i]);
            brr[arr[i]]++;
        }
        int count{s.size()};
        sort(brr, brr + n + 1, greater<int>());
        loop(i,0,n+1,1){
            count += max(0, (brr[i] - count - i + 1) / 2);
        }
        // int mx{brr[0]};
        // loop(i, 0, n + 1, 1) mx = max(mx, brr[i]);
        // count += max(0, (mx - count + 1) / 2);
        cout << count << "\n";
    }
}