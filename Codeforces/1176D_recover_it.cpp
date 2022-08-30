#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    //Sieve of Eratosthenes
    int n{2750132};
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++){
        if (is_prime[i] && (long long)i * i <= n){
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    vector<int> prime;
    loop(i,2,n,1){
        if(is_prime[i] = true)
            prime.push_back(i);
    }
    vector<int> b_prime, b_comp;
    int t;
    cin >> t;
    loop(i,0,2*t,1){
        int tmp;
        cin >> tmp;
        if(is_prime[tmp])
            b_prime.push_back(tmp);
        else
            b_comp.push_back(tmp);
    }
    sort(b_comp.rbegin(), b_comp.rend());
    sort(b_prime.begin(), b_prime.end());
    for(auto i: b_comp){
        for(auto j: prime){
            if(i%j == 0){
                int mx = max(i / j, j);
                if(is_prime[mx])
                    b_prime.erase(find(b_prime.begin(), b_prime.end(), mx));
                else
                    b_comp.erase(find(b_comp.begin(), b_comp.end(), mx));
            }
        }
    }
    // cout << b_comp.size() + (b_prime.size()) / 2 << "\n";
    for(auto i: b_comp)
        cout << i << " ";
    loop(i, 0, b_prime.size() / 2, 1) cout << b_prime[i] << " ";
    cout << "\n";
}