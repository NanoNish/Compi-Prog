//didnt complete it have an idea on how to do it but...
#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t{0};
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n>2){
        bool flag{1};
        vector<int> a(n), p(0), q(0);
        loop(i, 0, n, 1) cin >> a.at(i);
        vector<int>::iterator ind = a.begin(), itr = a.begin();
        loop(i, ind, a.end(), 1){
            if(i == itr){
                itr = (flag ? min_element(itr++, a.end()) : max_element(itr++, a.end()));
                flag = !flag;
                p.push_back(*i);
            }
            else{
                q.push_back(*i);
            }
        }
        int sum{0};
        loop(i, 0, p.size() - 1, 1) sum += abs(p[i] - p[i + 1]);
        loop(i, 0, q.size() - 1, 1) sum += abs(q[i] - q[i + 1]);
        cout << sum << endl;
        }
        else{
            int a, b;
            cin >> a >> b;
            cout << abs(a - b) << endl;
        }
    }
}
// b[0] b[n-1] 
// 1 4 6 3 4 2
// 1 2 3 4 4 6
// 1 j = 0 i = 0
// 6 j = 2 so b[3] = 0 ie i = 1, 2
// 2 j = 5 so i = 3 4 ie b[2] b[4] = 0