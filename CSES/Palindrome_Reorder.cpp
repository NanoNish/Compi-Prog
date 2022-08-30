#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    string s, a, b;
    cin >> s;
    int arr[26]{};
    vector<int> vec;
    loop(i, 0, s.length(), 1) arr[s[i] - 65]++;
    loop(i, 0, 26, 1) if (arr[i] & 1){
        vec.push_back(i);
    }
    if(vec.size() > 1){
        cout << "NO SOLUTION";
        return 0;
    }
    loop(i,0,26,1){
        loop(j, 0, arr[i] / 2, 1) a += char(i + 65);
    }
    b = a;
    if(vec.size() == 1)
        a += char(vec[0] + 65);
    reverse(b.begin(), b.end());
    a += b;
    cout << a;
}