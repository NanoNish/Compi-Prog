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
        int l{0}, r{0}, flag{1};
        loop(i, 0, n, 1){
            cin >> arr[i];
            if(arr[i] != i + 1 && flag == 1){
                l = i;
                flag--;
            }
            if (arr[i] == l + 1 && flag == 0){
                r = i;
                flag = 2;
            }
        }
        loop(i, 0, l, 1) cout << arr[i] << " ";
        for (int i{r}; i >= l; i--)
            cout << arr[i] << " ";
        loop(i, r + 1, n, 1) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}