#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int check(int a, int b){
    int count{};
    if(b == 1) return INT_MAX;
    while(a){
        a /= b;
        count++;
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a < b){
            cout << 1 << "\n";
            continue;
        }
        int best{check(a,b)}, b_org{b};
        while(1){
            int count{};
            b++;
            count = check(a, b) + b - b_org;
            if(count <= best)
                best = count;
            else
                break;
        }
        cout << best << "\n";
    }
}