#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
using namespace std;

int main(){
    //Sieve of Eratosthenes: took help of tutorialspoint
    const int num = 1000000;
    bool pno[num + 1];
    memset(pno, true, sizeof(pno));
    for (int i = 2; i*i <= num; i++){
        if (pno[i] == true){
            for (int j = i * 2; j <= num; j += i)
                pno[j] = false;
        }
    }
    pno[0] = pno[1] = 0;
    int n, k;
    cin >> n >> k;
    int arr[n], primes[n + 1]{};
    loop(i, 0, n, 1) cin >> arr[i];
    primes[0] = 0;
    primes[1] = pno[arr[0]];
    loop(i, 1, n, 1){
        if (pno[arr[i]]){
            primes[i + 1] = primes[i] + 1;
        }
        else
            primes[i + 1] = primes[i];
    }
    //int count{0};
    // loop(i, 0, n, 1){
    //     loop(j, i + 1, n + 1, 1){
    //         if (primes[j] - primes[i] <= k)
    //             count++;
    //     }
    // }
    ll count{0};
    int j{1};
    loop(i,1,n + 1,1){
        while (primes[i] - primes[j - 1] > k){
            j++;
        }
        count += i - j + 1;
    }
    cout << count;
}