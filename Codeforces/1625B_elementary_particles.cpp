#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

/*Solution using pairs*/

int main(){
    int t{0};
    cin >> t;
    while(t--){
        ll n, temp;
        cin >> n;
        ll mn{n};
        vector <pair<ll, ll>> vec;
        loop(i, 0, n, 1){
            cin >> temp;
            vec.push_back(make_pair(temp, i));
        }
        sort(vec.begin(), vec.end());
        loop(i, 1, n, 1){
            if(vec.at(i).first == vec.at(i-1).first){
                ll diff = abs(vec.at(i).second - vec.at(i - 1).second);
                if (mn > diff)
                    mn = diff;
            }
        }
        if(mn == n)
            cout << -1 << "\n";
        else
            cout << n - mn << "\n";
    }
    return 0;
}

/*Brute force solution*/

// int main(){
//     int t{0};
//     cin >> t;
//     for (int i{0}; i < t; i++){
//         int n{0};
//         cin >> n;
//         int a[n];
//         for (int j{0}; j < n; j++)
//             cin >> a[j];
//         int mn{n};
//         for (int j{0}; j < n; j++){
//             for (int k{j+1}; k < n; k++){
//                 if(a[j] == a[k]){
//                     if((k-j) < mn) mn = k - j;
//                     break;
//                 }
//             }
//         }
//         if(mn == n)
//             cout << -1 << endl;
//         else
//             cout << n - mn << endl;
//     }
// }

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