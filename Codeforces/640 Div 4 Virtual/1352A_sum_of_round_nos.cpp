#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int count{0};
        loop(i, 0, s.length(), 1){
            if (s[i] != '0')
                count++;
        }
        cout << count << "\n";
        loop(i, 0, s.length(), 1){
            if (s[i] != '0')
                cout << (int(s[i]) - 48) * pow(10, s.length() - 1 - i) << " ";
        }
        cout << endl;
    }
    return 0;
}