#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
using namespace std;

int main(){
    //Here we desync the input and output streams so they work faster as they are independent now
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    int count{0}, count1{0}, tmp;
    loop(i, 0, n, 1){
        cin >> tmp;
        if (tmp == 1)
            count++;
        else
            count1++;
    }
    int l, r;
    loop(i, 0, q, 1){
        cin >> l >> r;
        //A simple trick here is that if condition is satisfied in first argument
        //then OR (||) doesnt go to next argument
        if (((r - l + 1) % 2 == 1) || min(count, count1) < (r - l + 1) / 2)
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }
}