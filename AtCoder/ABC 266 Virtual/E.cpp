#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    long double score = 3.5;
    loop(i,1,t,1){
        long double new_score{0};
        loop(j,1,7,1){
            new_score += max(score, (long double) j)/6;
        }
        score = new_score;
    }
    cout << setprecision(10) << score;
}