#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int arr[n][m], sort_arr[n][m];
        loop(i, 0, n, 1){
            int tmp[m];
            loop(j, 0, m, 1){
                cin >> arr[i][j];
                tmp[j] = arr[i][j];
            }
            sort(tmp, tmp + m);
            loop(j,0,m,1){
                sort_arr[i][j] = tmp[j];
            }
        }
        bool flag{1};
        vector<int> ind[n];
        loop(i,0,n,1){
            loop(j,0,m,1){
                if(arr[i][j] != sort_arr[i][j]){
                    ind[i].push_back(j);
                }
            }
            if(ind[i].size()>2){
                flag = 0;
                break;
            }
        }
        if(!flag){
            cout << -1 << "\n";
            continue;
        }
        bool flag2{0};
        int a{m+1}, b{m+1};
        loop(i,0,n,1){
            if(ind[i].size()>0){
                if(a == m+1){
                    a = ind[i][0];
                    b = ind[i][1];
                }
                if(ind[i][0] != a || ind[i][1] != b){
                    flag2 = 1;
                    break;
                }
            }
        }
        if(flag2){
            cout << -1 << "\n";
            continue;
        }
        if(a == m+1){
            cout << 1 << " " << 1 << "\n";
            continue;
        }
        loop(i,0,n,1){
            swap(arr[i][a], arr[i][b]);
        }
        bool flag3{1};
        loop(i,0,n && flag3,1){
            loop(j,0,m,1){
                if(arr[i][j] != sort_arr[i][j]){
                    flag3 = 0;
                    break;
                }
            }
        }
        if(flag3)
            cout << a + 1 << " " << b + 1 << "\n";
        else
            cout << -1 << "\n";
    }
}





//int a{m}, b{m};
// bool flag{1};
// loop(j,1,m && flag,1){
//     loop(i,0,n,1){
//         if(arr[i][j] < arr[i][j-1]){
//             a = j, b = j - 1;
//             flag = 0;
//             break;
//         }
//     }
// }
// if(!flag){
//     loop(i,0,n,1) swap(arr[i][a], arr[i][b]);
// }
// bool flag2{1};
// loop(j,a,m && flag2,1){
//     loop(i, 0, n, 1){
//         if (arr[i][j] < arr[i][j - 1]){
//             a = j, b = j - 1;
//             flag2 = 0;
//             break;
//         }
//     }
// }
// if(!flag2)
//     cout << -1 << "\n";
// else if(!flag && flag2)
//     cout << b + 1 << " " << a + 1 << "\n";
// else
//     cout << 1 << " " << 1 << "\n";
// bool flag3{0};
// loop(j,1,m,1){
//     bool flag4{1};
//     loop(i, 0, n, 1){
//         if(arr[i][j] != arr[i][j-1]){
//             flag4 = 0;
//             break;
//         }
//     }
//     if(flag4){
//         flag3 = 1;
//         a = j, b = j - 1;
//     }
// }
// if(flag3)
//     cout << b + 1 << " " << a + 1 << "\n";
// else
//     cout << -1 << "\n";