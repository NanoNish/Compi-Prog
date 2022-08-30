#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count0{0}, count1{0}, count2{0};
        loop(i,0,n,1){
            ll tmp;
            cin >> tmp;
            if(tmp%3 == 0)
                count0++;
            else if(tmp%3 == 1)
                count1++;
            else
                count2++;
        }
        if(count2 >= count1){
            cout << count0 + count1 + (count2 - count1) / 3 << "\n";
        }
        else
            cout << count0 + count2 + (count1 - count2) / 3 << "\n";
    }
}