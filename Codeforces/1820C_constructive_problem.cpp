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
        int arr[n+3]{}, brr[n]{};
        loop(i,0,n,1){
            int tmp;
            cin >> tmp;
            brr[i] = tmp;
            if(tmp < n+3)
                arr[tmp]++;
        }
        int mex{0}, mex1{0};
        loop(i,0,n+3,1){
            if(arr[i] == 0){
                mex = i;
                break;
            }
        }
        if(arr[mex+1] == 0){
            if(n >= mex+1)
                cout << "Yes\n";
            else
                cout << "No\n";
            continue;
        }
        int l{-1}, r{n};
        loop(i,0,n,1){
            if(brr[i] == mex+1){
                r = i;
                if(l == -1)
                    l = i;
            }
        }
        loop(i, l, r + 1, 1) {
            if(brr[i] < n+3) arr[brr[i]]--;
            arr[mex]++;
        }
        loop(i,0,n+3,1){
            if(arr[i] == 0){
                mex1 = i;
                break;
            }
        }
        if(mex1-mex==1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}