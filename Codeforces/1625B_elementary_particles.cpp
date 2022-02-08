#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++){
        int n{0};
        cin >> n;
        int a[n];
        for (int j{0}; j < n; j++)
            cin >> a[j];
        int min{n};
        for (int j{0}; j < n; j++){
            for (int k{j+1}; k < n; k++){
                if(a[j] == a[k]){
                    if((k-j) < min) min = k - j;
                    break;
                }
            }
        }
        if(min == n)
            cout << -1 << endl;
        else
            cout << n - min << endl;
    }
}

/*
3 1 5 2 1 3 4
3 1 5 2     3 1
2 1 3 4     3 4

3 5 1 2 1 3 4
3 5 1 2 1   3 5
1 2 1 3 4   3 4

3 5 2 1 3 1 4
3 5 2       3 5 2 1 3
3 1 4       2 1 3 1 4

5 3 2 1 3 4 1
5 3 2 1
1 3 4 1
*/