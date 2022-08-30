#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int arr[n], marked[n]{};
        loop(i, 0, n, 1){
            cin >> arr[i];
            arr[i]--;
        }
        vector<string> vec;
        loop(i, 0, n, 1){
            if (!(marked[i] & 1)){
                string s;
                s += str[i];
                marked[i] = 1;
                int tmp{arr[i]};
                do{
                    s += str[tmp];
                    marked[tmp] = 1;
                    tmp = arr[tmp];
                } while (!(marked[tmp] & 1));
                vec.push_back(s);
            }
        }
        ll lcm{1};
        for (auto s : vec){
            ll count{0};
            string s_tmp{s};
            do{
                rotate(s_tmp.begin(), s_tmp.begin() + 1, s_tmp.end());
                count++;
            } while (s_tmp != s);
            lcm = lcm * count / __gcd(lcm, count);
        }
        cout << lcm << "\n";
    }
}