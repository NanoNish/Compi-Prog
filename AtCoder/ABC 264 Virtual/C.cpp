#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int h1, h2, w1, w2;

pair<string, int> binconvh(int n){
    string s;
    int count{0};
    loop(i,0,h1,1){
        s += (n&1) + 48;
        count += n & 1;
        n = n >> 1;
    }
    reverse(s.begin(), s.end());
    return {s,count};
}

pair<string, int> binconvw(int n){
    string s;
    int count{0};
    loop(i,0,w1,1){
        s += (n&1) + 48;
        count += n & 1;
        n = n >> 1;
    }
    reverse(s.begin(), s.end());
    return {s,count};
}

int main(){
    cin >> h1 >> w1;
    int arr[h1][w1]{};
    loop(i,0,h1,1) loop(j,0,w1,1) cin >> arr[i][j];
    cin >> h2 >> w2;
    int brr[h2][w2]{};
    loop(i,0,h2,1) loop(j,0,w2,1) cin >> brr[i][j];
    loop(i,0,2^h1,1){
        auto x = binconvh(i);
        if(x.second != h2)
            continue;
        loop(j,0,2^w1,1){
            auto y = binconvw(j);
            if(y.second != w2)
                continue;
            int crr[h2][w2]{};
            int l{0}, r{0};
            loop(h,0,h1,1){
                if(x.first[h] == '1'){
                    loop(w,0,w1,1){
                        if(y.first[w] == '1'){
                            crr[l][r] = arr[h][w];
                            r++;
                        }
                    }
                    l++;
                }
            }
            bool flag{0};
            loop(h,0,h2,1){
                loop(w,0,w2,1){
                    if(crr[h][w] != brr[h][w]){
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if(flag == 0){
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
}