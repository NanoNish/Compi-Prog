// #include <bits/stdc++.h>
// #define ll long long int
// #define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
// using namespace std;

// int main(){
//     int t{0};
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int a[n], b[n];
//         loop(i, 0, n, 1) cin >> a[n];
//         loop(i, 0, n, 1) cin >> b[n];
//         ll cost1, cost2, cost3, cost4;
//         cost1 = abs(a[0] - b[1]) + abs(a[n - 1] - b[1]);
//         cost2 = abs(b[0] - a[1]) + abs(b[n - 1] - a[1]);
//         cost3 = min(abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]),abs(a[n-1] - b[0]) + abs(a[0] - b[n - 1]));
//         loop(i,2,n-1,1){
//             if (abs(a[0] - b[i]) + abs(a[n - 1] - b[i]) < cost1)
//                 cost1 = abs(a[0] - b[i]) + abs(a[n - 1] - b[i]);
//             if (abs(b[0] - a[i]) + abs(b[n - 1] - a[i]) < cost2)
//                 cost2 = abs(b[0] - a[i]) + abs(b[n - 1] - a[i]);
//         }
//         ll c, d, e, f, g, h, i, g, h, k;
//         c = abs(a[0] - b[0]) + abs(a[n - 1] - b[0]);
//         d = abs(b[0] - a[0]) + abs(b[n - 1] - a[0]);
//         e = abs(a[0] - b[n - 1]) + abs(a[n - 1] - b[n - 1]);
//         f = abs(b[0] - a[n - 1]) + abs(b[n - 1] - a[n - 1]);
//         bool flag1{0}, flag2{0}, flag3{0}, flag4{0};
//         if(c < e)
//             flag1 = 1;
//         if(d < f)
//             flag2 = 1;
//         if(int(flag1) + int(flag2) == 1){
//             if(c < e){
//                 cost1 = min(c, cost1);
//                 cost2 = min(f, cost2);
//             }
//             else{
//                 cost1 = min(e, cost1);
//                 cost2 = min(d, cost2);
//             }
//         }
//         else if (int(flag1) + int(flag2) == 0){
//             if
//         }
//     }
// }

// #include <bits/stdc++.h>
// #define ll long long int
// #define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
// using namespace std;

// int main(){
//     int t{0};
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int a[n], b[n];
//         loop(i, 0, n, 1) cin >> a[i];
//         loop(i, 0, n, 1) cin >> b[i];
//         ll cost1, cost2, cost3, cost4;
//         int l{0}, m{0};
//         cost1 = abs(a[0] - b[0]) + abs(a[n - 1] - b[0]);
//         cost2 = abs(b[0] - a[0]) + abs(b[n - 1] - a[0]);
//         cost3 = min(abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]), abs(a[n - 1] - b[0]) + abs(a[0] - b[n - 1]));
//         loop(i,1,n,1){
//             if (abs(a[0] - b[i]) + abs(a[n - 1] - b[i]) < cost1){
//                 cost1 = abs(a[0] - b[i]) + abs(a[n - 1] - b[i]);
//                 l = i;
//             }
//             if (abs(b[0] - a[i]) + abs(b[n - 1] - a[i]) < cost2){
//                 cost2 = abs(b[0] - a[i]) + abs(b[n - 1] - a[i]);
//                 m = i;
//             }
//         }
//         if(l == 0 && m == 0){
//             cost1 -= abs(a[0] - b[0]);
//         }
//         if (l == n-1 && m == n-1){
//             cost1 -= abs(a[n - 1] - b[n - 1]);
//         }
//         if (l == 0 && m == n - 1){
//             cost1 -= abs(a[0] - b[n - 1]);
//         }
//         if (l == n - 1 && m == 0){
//             cost1 -= abs(a[n - 1] - b[0]);
//         }
//         ll e{abs(b[1] - a[0])}, f{abs(b[1] - a[n - 1])}, g{abs(a[1] - b[0])}, h{abs(a[1] - b[n - 1])};
//         loop(i, 0, n, 1){
//             if(e > b[i] - a[0])
//                 e = abs(b[i] - a[0]);
//             if (f > b[i] - a[n - 1])
//                 f = abs(b[i] - a[n - 1]);
//             if (g > a[i] - b[0])
//                 g = abs(a[i] - b[0]);
//             if (h > a[i] - b[n - 1])
//                 h = abs(a[i] - b[n - 1]);
//         }
//         cost4 = e + f + g + h;
//         cout << min(cost4, min(cost3, cost1 + cost2)) << endl;
//     }
// }

// #include <bits/stdc++.h>
// #define ll long long int
// #define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
// using namespace std;

// int main(){
//     int t{0};
//     cin >> t;
//     while(t--){
//         int n{0};
//         cin >> n;
//         int a[n], b[n];
//         loop(i, 0, n, 1) cin >> a[i];
//         loop(i, 0, n, 1) cin >> b[i];
//         int r{0}, s{0}, t{0}, u{0};
//         ll e{abs(b[1] - a[0])}, f{abs(b[1] - a[n - 1])}, g{abs(a[1] - b[0])}, h{abs(a[1] - b[n - 1])};
//         loop(i, 0, n, 1){
//             if(e > b[i] - a[0]){
//                 e = abs(b[i] - a[0]);
//                 r = i;
//             }
//             if (f > b[i] - a[n - 1]){
//                 f = abs(b[i] - a[n - 1]);
//                 s = i;
//             }
//             if (g > a[i] - b[0]){
//                 g = abs(a[i] - b[0]);
//                 t = i;
//             }
//             if (h > a[i] - b[n - 1]){
//                 h = abs(a[i] - b[n - 1]);
//                 u = i;
//             }
//         }
//         ll cost{e + f + g + h};
//         if (r == 0 && t == 0)
//             cost -= e;
//         if (s == n - 1 && u == n - 1)
//             cost -= f;
//         if (s == 0 && t == n - 1)
//             cost -= g;
//         if (u == 0 && r == n - 1)
//             cost -= h;
//         cout << cost;
//     }
// }

#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n{0};
        cin >> n;
        int arr[n], brr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        loop(i, 0, n, 1) cin >> brr[i];
        int a1{0}, an{0}, b1{0}, bn{0};
        loop(i, 0, n, 1){
            if(abs(arr[0] - brr[i]) < abs(arr[0] - brr[a1]))
                a1 = i;
        }
        loop(i, 0, n, 1){
            if (abs(arr[n-1] - brr[i]) < abs(arr[n-1] - brr[an]))
                an = i;
        }
        loop(i, 0, n, 1){
            if (abs(brr[0] - arr[i]) < abs(brr[0] - arr[b1]))
                b1 = i;
        }
        loop(i, 0, n, 1){
            if (abs(brr[n-1] - arr[i]) < abs(brr[n-1] - arr[bn]))
                bn = i;
        }
        ll cost = abs(arr[0] - brr[a1]) + abs(arr[n-1] - brr[a1]) + abs(brr[0] - arr[b1]) + abs(brr[n-1] - arr[bn]);
        if(a1 == 0 && b1 == 0)
            cost -= abs(arr[0] - brr[0]);
        if(a1 == n - 1 && bn == 0)
            cost -= abs(arr[0] - brr[n - 1]);
        if(an == 0 && b1 == n - 1)
            cost -= abs(arr[n - 1] - brr[0]);
        if(an == n - 1 && bn == n - 1)
            cost -= abs(arr[n - 1] - brr[n - 1]);
        cout << cost << "\n";
    }
}