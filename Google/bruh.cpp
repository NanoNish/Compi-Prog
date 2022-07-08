#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int test;
    cin >> test;
    loop(t,1,test+1,1){
        int n, y;
        cin >> n >> y;
        ll arr[n];
        loop(i, 0, n, 1) cin >> arr[i];
        long double sq_sum{}, sum{};
        loop(i, 0, n, 1) sum += arr[i];
        loop(i,0,n,1){
            loop(j,i+1,n,1){
                sq_sum += 2 * arr[i] * arr[j];
            }
        }
        if (4 * sum * sum - 8 * sq_sum<0){
            cout << "Case #" << t << ": " << "IMPOSSIBLE" << "\n";
            continue;
        }
        long double k = (-2 * sum + pow((4 * sum * sum - 8 * sq_sum), 1 / 2)) / 2;
        if(floor(k) == ceil(k))
            cout << "Case #" << t << ": " << floor(k) << "\n";
        else cout << "Case #" << t << ": " << "IMPOSSIBLE" << "\n";
    }
}
// sum(a)+k ^ 2 = sum(a^2) + k^2 + 2*k*sum(a) + 2*sum(aa)
// k^2 + 2*k*sum(a) + 2*sum(aa)