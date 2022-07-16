#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n], sum_arr[n + 1]{0};
        short arr_check[8001]{0};
        bool arr_flag[8001]{0};
        loop(i, 0, n, 1){
            cin >> arr[i];
            sum_arr[i + 1] = sum_arr[i] + arr[i];
            arr_check[arr[i]] += 1;
        }
        // bool check[8000]{0};
        // set<ll> s;
        int count{0};
        // map<int, bool> m;
        loop(i, 0, n + 1, 1){
            loop(j, i + 2, n + 1, 1){
                // s.insert(sum_arr[j] - sum_arr[i]);
                // m[sum_arr[j] - sum_arr[i]] = 1;
                //  if(sum_arr[j] - sum_arr[i] <= 8000)
                //      m[sum_arr[j] - sum_arr[i]] = 1;
                if (sum_arr[j] - sum_arr[i] <= 8000 && !(arr_flag[sum_arr[j] - sum_arr[i]])){
                    count += arr_check[sum_arr[j] - sum_arr[i]];
                    arr_flag[sum_arr[j] - sum_arr[i]] = 1;
                }
            }
        }
        // int count{0};
        // loop(i,0,n,1){
        //     //if (s.find(arr[i]) != s.end())
        //     //    count++;
        //     if(m[arr[i]])
        //        count++;
        //     // if(check[arr[i]])
        //     //     count++;
        // }
        cout << count << "\n";
    }
}

// #include <bits/stdc++.h>
// #define ll long long int
// #define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         ll arr[n], sum_arr[n+1]{0};
//         bool arr_check[8000]{0};
//         loop(i,0,n,1){
//             cin >> arr[i];
//             sum_arr[i+1] = sum_arr[i] + arr[i];
//             arr_check[arr[i]] = 1;
//         }
//         //bool check[8000]{0};
//         //set<ll> s;
//         int count{0};
//         map<int, bool> m;
//         loop(i, 0, n+1, 1){
//             loop(j,i+2,n+1,1){
//                 //s.insert(sum_arr[j] - sum_arr[i]);
//                 //m[sum_arr[j] - sum_arr[i]] = 1;
//                 // if(sum_arr[j] - sum_arr[i] <= 8000)
//                 //     m[sum_arr[j] - sum_arr[i]] = 1;
//                 if (sum_arr[j] - sum_arr[i] <= 8000)
//                     if(arr_check[sum_arr[j] - sum_arr[i]] == 1)
//                         count++;
//             }
//         }
//         // int count{0};
//         // loop(i,0,n,1){
//         //     //if (s.find(arr[i]) != s.end())
//         //     //    count++;
//         //     if(m[arr[i]])
//         //        count++;
//         //     // if(check[arr[i]])
//         //     //     count++;
//         // }
//         cout << count << "\n";
//     }
// }