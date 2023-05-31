#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int n, m;
    cin >> n;
    int arr[n]{};
    loop(i,0,n,1){
        cin >> arr[i];
    }
    cin >> m;
    int brr[m]{};
    loop(i, 0, m, 1) cin >> brr[i];
    int x;
    cin >> x;
    int step[x + 1]{};
    loop(i, 0, m, 1) step[brr[i]] = -1;
    step[0] = 1;
    loop(i,0,x,1){
        if(step[i] != 1)
            continue;
        loop(j, 0, n, 1){
            if(i + arr[j] > x)
                break;
            if(step[i+arr[j]] != -1)
                step[i + arr[j]] = 1;
        }
    }
    cout << (step[x] == 1 ? "Yes" : "No");
}