#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1]{}, presum[n+1]{};
        int count{0};
        loop(i, 0, n, 1){
            int tmp;
            cin >> tmp;
            arr[tmp]++;
        }
        loop(i, 1, n + 1, 1) 
            presum[i] = presum[i - 1] + arr[i];
        loop(i,1,n+1,1){
            presum[i] = ceil(((long double)presum[i]) / i);
        }
        loop(i,0,n+1,1){
            count = max(count, presum[i]);
        }
        cout << count << "\n";
    }
}

// #include <bits/stdc++.h>
// #define ll long long int
// #define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
// #define FAST                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(0);                       \
//     cout.tie(0);
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int count{1}, xtra{0};
//         int arr[n + 1]{};
//         loop(i, 0, n, 1)
//         {
//             int tmp;
//             cin >> tmp;
//             arr[tmp]++;
//         }
//         loop(i, 1, n + 1, 1)
//         {
//             if (xtra >= arr[i])
//             {
//                 int diff = arr[i];
//                 arr[i] = 0;
//                 xtra -= diff;
//             }
//             else if (xtra)
//             {
//                 arr[i] -= xtra;
//                 xtra = 0;
//             }
//             if (arr[i] > count)
//             {
//                 count = arr[i];
//             }
//             else if (arr[i] < count)
//             {
//                 xtra += count - arr[i];
//             }
//         }
//         cout << count << "\n";
//     }
// }