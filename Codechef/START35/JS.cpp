#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, even{0}, odd{0};
        cin >> n;
        ll arr[n];
        loop(i, 0, n, 1){
            cin >> arr[i];
            if (arr[i] & 1)
                odd++;
            else
                even++;
        }
        if (abs(arr[n - 1] - arr[0]) % 2 == 0){
            if (arr[0] & 1)
                cout << odd - 1 << "\n";
            else
                cout << even - 1 << "\n";
            continue;
        }
        ll brr[n]{}, gone{1}, count{0}, mncount{n + 1};
        if (arr[0] & 1){
            for (auto i{n - 2}; i >= 0; i--){
                if (arr[i] & 1){
                    brr[i] = gone;
                }
                else
                    gone++;
            }
            mncount = brr[0];
            loop(i, 1, n - 1, 1){
                if (arr[i] & 1){
                    count++;
                    mncount = min(mncount, brr[i] + count);
                }
            }
        }
        else{
            for (auto i{n - 2}; i >= 0; i--){
                if (!(arr[i] & 1)){
                    brr[i] = gone;
                }
                else
                    gone++;
            }
            mncount = brr[0];
            loop(i, 1, n - 1, 1){
                if (!(arr[i] & 1)){
                    count++;
                    mncount = min(mncount, brr[i] + count);
                }
            }
        }
        cout << mncount << "\n";
    }
}
