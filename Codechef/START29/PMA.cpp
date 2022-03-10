#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n{0}, tmp{0};
        cin >> n;
        vector<int> odd(0), even(0);
        ll sum{0};
        loop(i,0,n,1){
            cin >> tmp;
            if(i&1)
                odd.push_back(abs(tmp));
            else
                even.push_back(abs(tmp));
            sum += pow(-1, i) * abs(tmp);
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        if(even[0] < odd[odd.size()-1])
            sum = sum - 2 * even[0] + 2 * odd[odd.size()-1];
        cout << sum << endl;
    }
}