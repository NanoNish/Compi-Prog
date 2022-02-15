#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0};
        cin >> n;
        int a[n], b[n];
        loop(i, 0, n, 1) cin >> a[i];
        loop(i, 0, n, 1) cin >> b[i];
        int diff[n], diff_sum{0}, control_sum{0}, control_ind{-1};
        loop(i, 0, n, 1){
            if (a[i] > b[i]) swap(a[i], b[i]);
            diff[i] = b[i] - a[i];
            diff_sum += diff[i];
        }
        loop(i, 0, n, 1){
            loop(j, i + 1, n, 1){
                if(diff[i] < diff[j]){
                    swap(diff[i], diff[j]);
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                }
            }
        }
        loop(i, 0, n, 1){
            control_sum += diff[i];
            if(control_sum == double(diff_sum) / 2){
                control_ind = i;
                break;
            }
            if (control_sum > diff_sum / 2){
                control_ind = (control_sum * 2 - diff_sum < 
                diff_sum - 2 * (control_sum - diff[i]) ? i : i - 1);
                break;
            }
        }
        loop(i, 0, control_ind + 1, 1){
            swap(a[i], b[i]);
        }
        ll a_cost{0}, b_cost{0};
        loop(i, 0, n, 1){
            loop(j, i + 1, n, 1){
                a_cost += (a[i] + a[j]) * (a[i] + a[j]);
                b_cost += (b[i] + b[j]) * (b[i] + b[j]);
            }
        }
        cout << a_cost + b_cost << "\n";
    }
    return 0;
}