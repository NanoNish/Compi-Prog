#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        map<char, int> all_org, all_mix, diff;
        string original[n], mixed[n - 1];
        loop(i, 0, n, 1){
            cin >> original[i];
            loop(j, 0, m, 1)
                all_org[original[i][j]]++;
        }
        loop(i, 0, n - 1, 1){
            cin >> mixed[i];
            loop(j, 0, m, 1)
                all_mix[mixed[i][j]]++;
        }
        loop(i, 97, 123, 1){
            diff[i] = all_org[i] - all_mix[i];
        }
        int ans = n;
        loop(i, 0, n, 1){
            map<char, int> here;
            loop(j, 0, m, 1){
                here[original[i][j]]++;
            }
            bool flag{1};
            loop(j, 97, 123, 1){
                if(diff[j] != here[j]){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                ans = i;
                break;
            }
        }
        cout << original[ans] << endl;
    }
}