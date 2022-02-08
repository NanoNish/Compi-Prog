#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        int n, x, y;
        cin >> n >> x >> y;
        int a[n], d[n];
        for (int j{0}; j < n; j++)
            cin >> a[j];
        for (int j{0}; j < n; j++){
            int temp{0};
            cin >> temp;
            d[j] = temp - a[j];
        }
        bool flag{1};
        int count{0};
        for (int j{0}; j < n; j++){
            if(d[j]!=x && d[j]!=y){
                cout << "No" << endl;
                flag = 0;
                break;
            }
            else if(d[j]!=x){
                x = y;
                count++;
                if(count>2){
                    cout << "No" << endl;
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
            cout << "Yes" << endl;
    }
}