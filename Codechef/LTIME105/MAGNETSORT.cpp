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
        int arr[n], s_arr[n];
        string pol;
        loop(i, 0, n, 1){
            cin >> arr[i];
            s_arr[i] = arr[i];
        }
        cin >> pol;
        sort(s_arr, s_arr + n);
        int f_no{0}, l_no{n - 1}, diff{0};
        bool sort_check{1};
        loop(i, 0, n, 1){
            if(s_arr[i] != arr[i]){
                if(sort_check)
                    //f_no = i;
                sort_check = 0;
            }
        }
        if(sort_check){
            cout << 0 << "\n";
            continue;
        }
        bool pol_check{1};
        loop(i, 0, n-1, 1){
            if(pol[i] != pol[n-1]){
                diff = i;
                pol_check = 0;
            }
        }
        if(pol_check){
            cout << -1 << "\n";
            continue;
        }
        int mx{arr[0]}, mn{INT_MAX};
        loop(j, 0, diff, 1){
            if(arr[j] > mx)
                mx = arr[j];
        }
        loop(j, diff + 1, n, 1){
            if (arr[j] < mn)
                mn = arr[j];
        }
        if(mx < mn){
            cout << 2 << "\n";
        }
        else
            cout << 1 << "\n";
        // for (auto i{n - 1}; i > 0; i--)
        // {
        //     if (s_arr[i] != arr[i]){
        //         l_no = i;
        //         break;
        //     }
        // }
    }
}

/*
if sorted then 0;
if all same char then -1;
if first wrong and last wrong have bounds inside 
*/

// int main(){
//     int t{0};
//     cin >> t;
//     while(t--){
//         int n{0};
//         cin >> n;
//         string s, sort_s{""};
//         int arr[n], sort_arr[n];
//         loop(i, 0, n, 1){
//             cin >> arr[i];
//             sort_arr[i] = arr[i];
//         }
//         cin >> s;
//         if(n == 1){
//             cout << "0" << "\n";
//             continue;
//         }
//         sort(sort_arr, sort_arr + n);
//         bool sort_flag{1};
//         loop(i, 0, n, 1){
//             if (arr[i] != sort_arr[i]) {
//                 sort_flag = 0;
//                 sort_s += '1';
//             }
//             else
//                 sort_s += '0';
//         }
//         if (sort_flag){
//             cout << 0 << "\n";
//             continue;
//         }
//         int s_count{0}, n_count{0};
//         loop(i, 0, n, 1){
//             if(s[i] == 'S') s_count++;
//             else n_count++;
//         }        
//         if(s_count == n || n_count == n){
//             cout << -1 << "\n";
//             continue;
//         }
//         char a{s[n-1]};
//         loop(i, 0, n - 1, 1){

//         }
//     }
// }